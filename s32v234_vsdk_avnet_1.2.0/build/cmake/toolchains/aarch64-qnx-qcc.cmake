##############################################################################
#
#
#                          License Agreement
#               For Open Source Computer Vision Library
#                       (3-clause BSD License)
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
#
#  * Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
#  * Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
#  * Neither the names of the copyright holders nor the names of the contributors
#    may be used to endorse or promote products derived from this software
#    without specific prior written permission.
#
# This software is provided by the copyright holders and contributors "as is" and
# any express or implied warranties, including, but not limited to, the implied
# warranties of merchantability and fitness for a particular purpose are disclaimed.
# In no event shall copyright holders or contributors be liable for any direct,
# indirect, incidental, special, exemplary, or consequential damages
# (including, but not limited to, procurement of substitute goods or services;
# loss of use, data, or profits; or business interruption) however caused
# and on any theory of liability, whether in contract, strict liability,
# or tort (including negligence or otherwise) arising in any way out of
# the use of this software, even if advised of the possibility of such damage.
#------------------------------------------------------------------#
#
# Copyright NXP 2017
# 
# Changes:
#         Original source from "2.4" branch of OpenCV 
#         Adapt toolchain for QNX7.0
#
#------------------------------------------------------------------#

set(TOOLCHAIN QNX)
set(CMAKE_SYSTEM_NAME QNX)
set(CMAKE_SYSTEM_VERSION 7.0.0)
set(CMAKE_SYSTEM_PROCESSOR aarch64)
set(TARGET_OS QNX)
set(TARGET_ARCH ARMV8)
set(TARGET_COMPILER GCC)

set(CMAKE_DL_LIBS "")
set(CMAKE_SHARED_LIBRARY_PREFIX "lib")
set(CMAKE_SHARED_LIBRARY_SUFFIX ".so")
set(CMAKE_STATIC_LIBRARY_PREFIX "lib")
set(CMAKE_STATIC_LIBRARY_SUFFIX ".a")

if("$ENV{QNX_HOST}" STREQUAL "")
    message(FATAL_ERROR "QNX_HOST environment variable not found. Please set the variable to your host's build tools")
endif()
if("$ENV{QNX_TARGET}" STREQUAL "")
    message(FATAL_ERROR "QNX_TARGET environment variable not found. Please set the variable to the qnx target location")
endif()

if(CMAKE_HOST_WIN32)
    set(HOST_EXECUTABLE_SUFFIX ".exe")
    #convert windows paths to cmake paths
    file(TO_CMAKE_PATH "$ENV{QNX_HOST}" QNX_HOST)
    file(TO_CMAKE_PATH "$ENV{QNX_TARGET}" QNX_TARGET)
else()
    set(QNX_HOST "$ENV{QNX_HOST}")
    set(QNX_TARGET "$ENV{QNX_TARGET}")
endif()

message(STATUS "using QNX_HOST ${QNX_HOST}")
message(STATUS "using QNX_TARGET ${QNX_TARGET}")

set(CMAKE_C_COMPILER   "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-gcc${HOST_EXECUTABLE_SUFFIX}"     CACHE PATH "QNX C compiler")
set(CMAKE_CXX_COMPILER "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-g++${HOST_EXECUTABLE_SUFFIX}"     CACHE PATH "QNX CXX compiler")
set(CMAKE_ASM_COMPILER "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-gcc${HOST_EXECUTABLE_SUFFIX}"      CACHE PATH "QNX CXX compiler assembler")
set(CMAKE_LINKER       "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-ld${HOST_EXECUTABLE_SUFFIX}"      CACHE PATH "QNX Linker Program")
set(CMAKE_MAKE_PROGRAM "${QNX_HOST}/usr/bin/make${HOST_EXECUTABLE_SUFFIX}"                                 CACHE PATH "QNX Make Program")
set(CMAKE_AR           "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-ar${HOST_EXECUTABLE_SUFFIX}"      CACHE PATH "QNX ar Program")
set(CMAKE_NM           "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-nm${HOST_EXECUTABLE_SUFFIX}"      CACHE PATH "QNX nm Program")
set(CMAKE_OBJCOPY      "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-objcopy${HOST_EXECUTABLE_SUFFIX}" CACHE PATH "QNX objcopy Program")
set(CMAKE_OBJDUMP      "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-objdump${HOST_EXECUTABLE_SUFFIX}" CACHE PATH "QNX objdump Program")
set(CMAKE_RANLIB       "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-ranlib${HOST_EXECUTABLE_SUFFIX}"  CACHE PATH "QNX ranlib Program")
set(CMAKE_SH           "${QNX_HOST}/usr/bin/sh${HOST_EXECUTABLE_SUFFIX}"                                   CACHE PATH "QNX shell Program")
set(CMAKE_STRIP        "${QNX_HOST}/usr/bin/nto${CMAKE_SYSTEM_PROCESSOR}-strip${HOST_EXECUTABLE_SUFFIX}"   CACHE PATH "QNX Strip Program")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS} -g -D_DEBUG")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS} -O3 -DNDEBUG")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -D_DEBUG -ftree-vectorize")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3 -DNDEBUG -ftree-vectorize")

#set successful exit value on target system
set(THREADS_PTHREAD_ARG 0)

add_definitions("-DTARGET_OS=QNX")
add_definitions("-DTARGET_ARCH=ARM")
add_definitions("-DOS_QNX")
add_definitions("-DARCH_ARM")

# necessary for gmock
add_definitions("-DGTEST_HAS_PTHREAD=1")

add_definitions(-D __GLIBCXX__="1")

set(CMAKE_FIND_ROOT_PATH ${QNX_TARGET})

set(CMAKE_SKIP_RPATH TRUE CACHE BOOL "If set, runtime paths are not added when using shared libraries.")
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM ONLY)

# macro to find programs on the host OS
macro( find_host_program )
 set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER )
 set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY NEVER )
 set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE NEVER )
 if( CMAKE_HOST_WIN32 )
  set( WIN32 1 )
  set( UNIX )
 elseif( CMAKE_HOST_APPLE )
  set( APPLE 1 )
  set( UNIX )
 endif()
 find_program( ${ARGN} )
 set( WIN32 )
 set( APPLE )
 set( UNIX 1 )
 set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM ONLY )
 set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY )
 set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY )
endmacro()

# macro to find packages on the host OS
macro( find_host_package )
 set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER )
 set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY NEVER )
 set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE NEVER )
 if( CMAKE_HOST_WIN32 )
  set( WIN32 1 )
  set( UNIX )
 elseif( CMAKE_HOST_APPLE )
  set( APPLE 1 )
  set( UNIX )
 endif()
 find_package( ${ARGN} )
 set( WIN32 )
 set( APPLE )
 set( UNIX 1 )
 set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM ONLY )
 set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY )
 set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY )
endmacro()