##############################################################################
#
# NXP Confidential Proprietary
#
# Copyright (c) 2014 Freescale Semiconductor
# Copyright (c) 2017 NXP
# All Rights Reserved
#
##############################################################################
#
# THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
# INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
# IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
# THE POSSIBILITY OF SUCH DAMAGE.
#
##############################################################################

SDK_ROOT := $(call path_relative_to,$(CURDIR),$(CURR_SDK_ROOT))

##############################################################################
# acf_app
##############################################################################
ARM_LIB = blockmatching_ref.a

ARM_LIB_SRCS =                                                               \
    blockmatching_ref.cpp                                                              
    
ARM_INCS +=                                                                  \
    -I$(SDK_ROOT)/include                                                    \
    -I$(OPENCV_ROOT)/include                                                 \
    -I../include                                                             \
    -I../src                                                                
    