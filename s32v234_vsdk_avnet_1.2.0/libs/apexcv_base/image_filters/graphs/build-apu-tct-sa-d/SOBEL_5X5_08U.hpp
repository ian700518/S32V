#ifndef _ACF_PROCESS_APU_SOBEL_5X5_08U
#define _ACF_PROCESS_APU_SOBEL_5X5_08U

#include <acf_process_apu.h>
#include <SOBEL_5X5_08U_APU_LOAD.h> //APU load associated with this process
#include <stdint.h>


//SCENARIO LIST*************************************************
static acf_scenario_buffer_data gScenarioBufferData0_SOBEL_5X5_08U[] = {{2, 1, 7, 0, {2, 2, 2, 2}}, {2, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData1_SOBEL_5X5_08U[] = {{4, 1, 7, 0, {2, 2, 2, 2}}, {4, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData2_SOBEL_5X5_08U[] = {{6, 1, 7, 0, {2, 2, 2, 2}}, {6, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData3_SOBEL_5X5_08U[] = {{8, 1, 7, 0, {2, 2, 2, 2}}, {8, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData4_SOBEL_5X5_08U[] = {{10, 1, 7, 0, {2, 2, 2, 2}}, {10, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData5_SOBEL_5X5_08U[] = {{12, 1, 7, 0, {2, 2, 2, 2}}, {12, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData6_SOBEL_5X5_08U[] = {{14, 1, 7, 0, {2, 2, 2, 2}}, {14, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData7_SOBEL_5X5_08U[] = {{16, 1, 7, 0, {2, 2, 2, 2}}, {16, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData8_SOBEL_5X5_08U[] = {{18, 1, 7, 0, {2, 2, 2, 2}}, {18, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData9_SOBEL_5X5_08U[] = {{20, 1, 7, 0, {2, 2, 2, 2}}, {20, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData10_SOBEL_5X5_08U[] = {{22, 1, 7, 0, {2, 2, 2, 2}}, {22, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData11_SOBEL_5X5_08U[] = {{24, 1, 7, 0, {2, 2, 2, 2}}, {24, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData12_SOBEL_5X5_08U[] = {{26, 1, 7, 0, {2, 2, 2, 2}}, {26, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData13_SOBEL_5X5_08U[] = {{28, 1, 7, 0, {2, 2, 2, 2}}, {28, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData14_SOBEL_5X5_08U[] = {{30, 1, 7, 0, {2, 2, 2, 2}}, {30, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData15_SOBEL_5X5_08U[] = {{32, 1, 7, 0, {2, 2, 2, 2}}, {32, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData16_SOBEL_5X5_08U[] = {{36, 1, 7, 0, {2, 2, 2, 2}}, {36, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData17_SOBEL_5X5_08U[] = {{40, 1, 7, 0, {2, 2, 2, 2}}, {40, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData18_SOBEL_5X5_08U[] = {{44, 1, 7, 0, {2, 2, 2, 2}}, {44, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData19_SOBEL_5X5_08U[] = {{48, 1, 7, 0, {2, 2, 2, 2}}, {48, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData20_SOBEL_5X5_08U[] = {{52, 1, 7, 0, {2, 2, 2, 2}}, {52, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData21_SOBEL_5X5_08U[] = {{56, 1, 7, 0, {2, 2, 2, 2}}, {56, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData22_SOBEL_5X5_08U[] = {{60, 1, 7, 0, {2, 2, 2, 2}}, {60, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData23_SOBEL_5X5_08U[] = {{64, 1, 7, 0, {2, 2, 2, 2}}, {64, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData24_SOBEL_5X5_08U[] = {{72, 1, 7, 0, {2, 2, 2, 2}}, {72, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData25_SOBEL_5X5_08U[] = {{80, 1, 7, 0, {2, 2, 2, 2}}, {80, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData26_SOBEL_5X5_08U[] = {{88, 1, 7, 0, {2, 2, 2, 2}}, {88, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData27_SOBEL_5X5_08U[] = {{96, 1, 7, 0, {2, 2, 2, 2}}, {96, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData28_SOBEL_5X5_08U[] = {{104, 1, 7, 0, {2, 2, 2, 2}}, {104, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData29_SOBEL_5X5_08U[] = {{112, 1, 7, 0, {2, 2, 2, 2}}, {112, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData30_SOBEL_5X5_08U[] = {{120, 1, 7, 0, {2, 2, 2, 2}}, {120, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData31_SOBEL_5X5_08U[] = {{128, 1, 7, 0, {2, 2, 2, 2}}, {128, 1, 2, 2, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData32_SOBEL_5X5_08U[] = {{2, 2, 4, 0, {2, 2, 2, 2}}, {2, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData33_SOBEL_5X5_08U[] = {{4, 2, 4, 0, {2, 2, 2, 2}}, {4, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData34_SOBEL_5X5_08U[] = {{6, 2, 4, 0, {2, 2, 2, 2}}, {6, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData35_SOBEL_5X5_08U[] = {{8, 2, 4, 0, {2, 2, 2, 2}}, {8, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData36_SOBEL_5X5_08U[] = {{10, 2, 4, 0, {2, 2, 2, 2}}, {10, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData37_SOBEL_5X5_08U[] = {{12, 2, 4, 0, {2, 2, 2, 2}}, {12, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData38_SOBEL_5X5_08U[] = {{14, 2, 4, 0, {2, 2, 2, 2}}, {14, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData39_SOBEL_5X5_08U[] = {{16, 2, 4, 0, {2, 2, 2, 2}}, {16, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData40_SOBEL_5X5_08U[] = {{18, 2, 4, 0, {2, 2, 2, 2}}, {18, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData41_SOBEL_5X5_08U[] = {{20, 2, 4, 0, {2, 2, 2, 2}}, {20, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData42_SOBEL_5X5_08U[] = {{22, 2, 4, 0, {2, 2, 2, 2}}, {22, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData43_SOBEL_5X5_08U[] = {{24, 2, 4, 0, {2, 2, 2, 2}}, {24, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData44_SOBEL_5X5_08U[] = {{26, 2, 4, 0, {2, 2, 2, 2}}, {26, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData45_SOBEL_5X5_08U[] = {{28, 2, 4, 0, {2, 2, 2, 2}}, {28, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData46_SOBEL_5X5_08U[] = {{30, 2, 4, 0, {2, 2, 2, 2}}, {30, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData47_SOBEL_5X5_08U[] = {{32, 2, 4, 0, {2, 2, 2, 2}}, {32, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData48_SOBEL_5X5_08U[] = {{36, 2, 4, 0, {2, 2, 2, 2}}, {36, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData49_SOBEL_5X5_08U[] = {{40, 2, 4, 0, {2, 2, 2, 2}}, {40, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData50_SOBEL_5X5_08U[] = {{44, 2, 4, 0, {2, 2, 2, 2}}, {44, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData51_SOBEL_5X5_08U[] = {{48, 2, 4, 0, {2, 2, 2, 2}}, {48, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData52_SOBEL_5X5_08U[] = {{52, 2, 4, 0, {2, 2, 2, 2}}, {52, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData53_SOBEL_5X5_08U[] = {{56, 2, 4, 0, {2, 2, 2, 2}}, {56, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData54_SOBEL_5X5_08U[] = {{60, 2, 4, 0, {2, 2, 2, 2}}, {60, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData55_SOBEL_5X5_08U[] = {{64, 2, 4, 0, {2, 2, 2, 2}}, {64, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData56_SOBEL_5X5_08U[] = {{72, 2, 4, 0, {2, 2, 2, 2}}, {72, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData57_SOBEL_5X5_08U[] = {{80, 2, 4, 0, {2, 2, 2, 2}}, {80, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData58_SOBEL_5X5_08U[] = {{88, 2, 4, 0, {2, 2, 2, 2}}, {88, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData59_SOBEL_5X5_08U[] = {{96, 2, 4, 0, {2, 2, 2, 2}}, {96, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData60_SOBEL_5X5_08U[] = {{104, 2, 4, 0, {2, 2, 2, 2}}, {104, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData61_SOBEL_5X5_08U[] = {{112, 2, 4, 0, {2, 2, 2, 2}}, {112, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData62_SOBEL_5X5_08U[] = {{120, 2, 4, 0, {2, 2, 2, 2}}, {120, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData63_SOBEL_5X5_08U[] = {{128, 2, 4, 0, {2, 2, 2, 2}}, {128, 2, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData64_SOBEL_5X5_08U[] = {{2, 3, 4, 0, {2, 2, 2, 2}}, {2, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData65_SOBEL_5X5_08U[] = {{4, 3, 4, 0, {2, 2, 2, 2}}, {4, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData66_SOBEL_5X5_08U[] = {{6, 3, 4, 0, {2, 2, 2, 2}}, {6, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData67_SOBEL_5X5_08U[] = {{8, 3, 4, 0, {2, 2, 2, 2}}, {8, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData68_SOBEL_5X5_08U[] = {{10, 3, 4, 0, {2, 2, 2, 2}}, {10, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData69_SOBEL_5X5_08U[] = {{12, 3, 4, 0, {2, 2, 2, 2}}, {12, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData70_SOBEL_5X5_08U[] = {{14, 3, 4, 0, {2, 2, 2, 2}}, {14, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData71_SOBEL_5X5_08U[] = {{16, 3, 4, 0, {2, 2, 2, 2}}, {16, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData72_SOBEL_5X5_08U[] = {{18, 3, 4, 0, {2, 2, 2, 2}}, {18, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData73_SOBEL_5X5_08U[] = {{20, 3, 4, 0, {2, 2, 2, 2}}, {20, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData74_SOBEL_5X5_08U[] = {{22, 3, 4, 0, {2, 2, 2, 2}}, {22, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData75_SOBEL_5X5_08U[] = {{24, 3, 4, 0, {2, 2, 2, 2}}, {24, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData76_SOBEL_5X5_08U[] = {{26, 3, 4, 0, {2, 2, 2, 2}}, {26, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData77_SOBEL_5X5_08U[] = {{28, 3, 4, 0, {2, 2, 2, 2}}, {28, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData78_SOBEL_5X5_08U[] = {{30, 3, 4, 0, {2, 2, 2, 2}}, {30, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData79_SOBEL_5X5_08U[] = {{32, 3, 4, 0, {2, 2, 2, 2}}, {32, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData80_SOBEL_5X5_08U[] = {{36, 3, 4, 0, {2, 2, 2, 2}}, {36, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData81_SOBEL_5X5_08U[] = {{40, 3, 4, 0, {2, 2, 2, 2}}, {40, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData82_SOBEL_5X5_08U[] = {{44, 3, 4, 0, {2, 2, 2, 2}}, {44, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData83_SOBEL_5X5_08U[] = {{48, 3, 4, 0, {2, 2, 2, 2}}, {48, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData84_SOBEL_5X5_08U[] = {{52, 3, 4, 0, {2, 2, 2, 2}}, {52, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData85_SOBEL_5X5_08U[] = {{56, 3, 4, 0, {2, 2, 2, 2}}, {56, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData86_SOBEL_5X5_08U[] = {{60, 3, 4, 0, {2, 2, 2, 2}}, {60, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData87_SOBEL_5X5_08U[] = {{64, 3, 4, 0, {2, 2, 2, 2}}, {64, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData88_SOBEL_5X5_08U[] = {{72, 3, 4, 0, {2, 2, 2, 2}}, {72, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData89_SOBEL_5X5_08U[] = {{80, 3, 4, 0, {2, 2, 2, 2}}, {80, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData90_SOBEL_5X5_08U[] = {{88, 3, 4, 0, {2, 2, 2, 2}}, {88, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData91_SOBEL_5X5_08U[] = {{96, 3, 4, 0, {2, 2, 2, 2}}, {96, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData92_SOBEL_5X5_08U[] = {{104, 3, 4, 0, {2, 2, 2, 2}}, {104, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData93_SOBEL_5X5_08U[] = {{112, 3, 4, 0, {2, 2, 2, 2}}, {112, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData94_SOBEL_5X5_08U[] = {{120, 3, 4, 0, {2, 2, 2, 2}}, {120, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData95_SOBEL_5X5_08U[] = {{128, 3, 4, 0, {2, 2, 2, 2}}, {128, 3, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData96_SOBEL_5X5_08U[] = {{2, 4, 4, 0, {2, 2, 2, 2}}, {2, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData97_SOBEL_5X5_08U[] = {{4, 4, 4, 0, {2, 2, 2, 2}}, {4, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData98_SOBEL_5X5_08U[] = {{6, 4, 4, 0, {2, 2, 2, 2}}, {6, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData99_SOBEL_5X5_08U[] = {{8, 4, 4, 0, {2, 2, 2, 2}}, {8, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData100_SOBEL_5X5_08U[] = {{10, 4, 4, 0, {2, 2, 2, 2}}, {10, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData101_SOBEL_5X5_08U[] = {{12, 4, 4, 0, {2, 2, 2, 2}}, {12, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData102_SOBEL_5X5_08U[] = {{14, 4, 4, 0, {2, 2, 2, 2}}, {14, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData103_SOBEL_5X5_08U[] = {{16, 4, 4, 0, {2, 2, 2, 2}}, {16, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData104_SOBEL_5X5_08U[] = {{18, 4, 4, 0, {2, 2, 2, 2}}, {18, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData105_SOBEL_5X5_08U[] = {{20, 4, 4, 0, {2, 2, 2, 2}}, {20, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData106_SOBEL_5X5_08U[] = {{22, 4, 4, 0, {2, 2, 2, 2}}, {22, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData107_SOBEL_5X5_08U[] = {{24, 4, 4, 0, {2, 2, 2, 2}}, {24, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData108_SOBEL_5X5_08U[] = {{26, 4, 4, 0, {2, 2, 2, 2}}, {26, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData109_SOBEL_5X5_08U[] = {{28, 4, 4, 0, {2, 2, 2, 2}}, {28, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData110_SOBEL_5X5_08U[] = {{30, 4, 4, 0, {2, 2, 2, 2}}, {30, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData111_SOBEL_5X5_08U[] = {{32, 4, 4, 0, {2, 2, 2, 2}}, {32, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData112_SOBEL_5X5_08U[] = {{36, 4, 4, 0, {2, 2, 2, 2}}, {36, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData113_SOBEL_5X5_08U[] = {{40, 4, 4, 0, {2, 2, 2, 2}}, {40, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData114_SOBEL_5X5_08U[] = {{44, 4, 4, 0, {2, 2, 2, 2}}, {44, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData115_SOBEL_5X5_08U[] = {{48, 4, 4, 0, {2, 2, 2, 2}}, {48, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData116_SOBEL_5X5_08U[] = {{52, 4, 4, 0, {2, 2, 2, 2}}, {52, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData117_SOBEL_5X5_08U[] = {{56, 4, 4, 0, {2, 2, 2, 2}}, {56, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData118_SOBEL_5X5_08U[] = {{60, 4, 4, 0, {2, 2, 2, 2}}, {60, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData119_SOBEL_5X5_08U[] = {{64, 4, 4, 0, {2, 2, 2, 2}}, {64, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData120_SOBEL_5X5_08U[] = {{72, 4, 4, 0, {2, 2, 2, 2}}, {72, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData121_SOBEL_5X5_08U[] = {{80, 4, 4, 0, {2, 2, 2, 2}}, {80, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData122_SOBEL_5X5_08U[] = {{88, 4, 4, 0, {2, 2, 2, 2}}, {88, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData123_SOBEL_5X5_08U[] = {{96, 4, 4, 0, {2, 2, 2, 2}}, {96, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData124_SOBEL_5X5_08U[] = {{104, 4, 4, 0, {2, 2, 2, 2}}, {104, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData125_SOBEL_5X5_08U[] = {{112, 4, 4, 0, {2, 2, 2, 2}}, {112, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData126_SOBEL_5X5_08U[] = {{120, 4, 4, 0, {2, 2, 2, 2}}, {120, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData127_SOBEL_5X5_08U[] = {{128, 4, 4, 0, {2, 2, 2, 2}}, {128, 4, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData128_SOBEL_5X5_08U[] = {{2, 5, 4, 0, {2, 2, 2, 2}}, {2, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData129_SOBEL_5X5_08U[] = {{4, 5, 4, 0, {2, 2, 2, 2}}, {4, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData130_SOBEL_5X5_08U[] = {{6, 5, 4, 0, {2, 2, 2, 2}}, {6, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData131_SOBEL_5X5_08U[] = {{8, 5, 4, 0, {2, 2, 2, 2}}, {8, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData132_SOBEL_5X5_08U[] = {{10, 5, 4, 0, {2, 2, 2, 2}}, {10, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData133_SOBEL_5X5_08U[] = {{12, 5, 4, 0, {2, 2, 2, 2}}, {12, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData134_SOBEL_5X5_08U[] = {{14, 5, 4, 0, {2, 2, 2, 2}}, {14, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData135_SOBEL_5X5_08U[] = {{16, 5, 4, 0, {2, 2, 2, 2}}, {16, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData136_SOBEL_5X5_08U[] = {{18, 5, 4, 0, {2, 2, 2, 2}}, {18, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData137_SOBEL_5X5_08U[] = {{20, 5, 4, 0, {2, 2, 2, 2}}, {20, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData138_SOBEL_5X5_08U[] = {{22, 5, 4, 0, {2, 2, 2, 2}}, {22, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData139_SOBEL_5X5_08U[] = {{24, 5, 4, 0, {2, 2, 2, 2}}, {24, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData140_SOBEL_5X5_08U[] = {{26, 5, 4, 0, {2, 2, 2, 2}}, {26, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData141_SOBEL_5X5_08U[] = {{28, 5, 4, 0, {2, 2, 2, 2}}, {28, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData142_SOBEL_5X5_08U[] = {{30, 5, 4, 0, {2, 2, 2, 2}}, {30, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData143_SOBEL_5X5_08U[] = {{32, 5, 4, 0, {2, 2, 2, 2}}, {32, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData144_SOBEL_5X5_08U[] = {{36, 5, 4, 0, {2, 2, 2, 2}}, {36, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData145_SOBEL_5X5_08U[] = {{40, 5, 4, 0, {2, 2, 2, 2}}, {40, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData146_SOBEL_5X5_08U[] = {{44, 5, 4, 0, {2, 2, 2, 2}}, {44, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData147_SOBEL_5X5_08U[] = {{48, 5, 4, 0, {2, 2, 2, 2}}, {48, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData148_SOBEL_5X5_08U[] = {{52, 5, 4, 0, {2, 2, 2, 2}}, {52, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData149_SOBEL_5X5_08U[] = {{56, 5, 4, 0, {2, 2, 2, 2}}, {56, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData150_SOBEL_5X5_08U[] = {{60, 5, 4, 0, {2, 2, 2, 2}}, {60, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData151_SOBEL_5X5_08U[] = {{64, 5, 4, 0, {2, 2, 2, 2}}, {64, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData152_SOBEL_5X5_08U[] = {{72, 5, 4, 0, {2, 2, 2, 2}}, {72, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData153_SOBEL_5X5_08U[] = {{80, 5, 4, 0, {2, 2, 2, 2}}, {80, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData154_SOBEL_5X5_08U[] = {{88, 5, 4, 0, {2, 2, 2, 2}}, {88, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData155_SOBEL_5X5_08U[] = {{96, 5, 4, 0, {2, 2, 2, 2}}, {96, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData156_SOBEL_5X5_08U[] = {{104, 5, 4, 0, {2, 2, 2, 2}}, {104, 5, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData157_SOBEL_5X5_08U[] = {{2, 6, 4, 0, {2, 2, 2, 2}}, {2, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData158_SOBEL_5X5_08U[] = {{4, 6, 4, 0, {2, 2, 2, 2}}, {4, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData159_SOBEL_5X5_08U[] = {{6, 6, 4, 0, {2, 2, 2, 2}}, {6, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData160_SOBEL_5X5_08U[] = {{8, 6, 4, 0, {2, 2, 2, 2}}, {8, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData161_SOBEL_5X5_08U[] = {{10, 6, 4, 0, {2, 2, 2, 2}}, {10, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData162_SOBEL_5X5_08U[] = {{12, 6, 4, 0, {2, 2, 2, 2}}, {12, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData163_SOBEL_5X5_08U[] = {{14, 6, 4, 0, {2, 2, 2, 2}}, {14, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData164_SOBEL_5X5_08U[] = {{16, 6, 4, 0, {2, 2, 2, 2}}, {16, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData165_SOBEL_5X5_08U[] = {{18, 6, 4, 0, {2, 2, 2, 2}}, {18, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData166_SOBEL_5X5_08U[] = {{20, 6, 4, 0, {2, 2, 2, 2}}, {20, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData167_SOBEL_5X5_08U[] = {{22, 6, 4, 0, {2, 2, 2, 2}}, {22, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData168_SOBEL_5X5_08U[] = {{24, 6, 4, 0, {2, 2, 2, 2}}, {24, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData169_SOBEL_5X5_08U[] = {{26, 6, 4, 0, {2, 2, 2, 2}}, {26, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData170_SOBEL_5X5_08U[] = {{28, 6, 4, 0, {2, 2, 2, 2}}, {28, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData171_SOBEL_5X5_08U[] = {{30, 6, 4, 0, {2, 2, 2, 2}}, {30, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData172_SOBEL_5X5_08U[] = {{32, 6, 4, 0, {2, 2, 2, 2}}, {32, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData173_SOBEL_5X5_08U[] = {{36, 6, 4, 0, {2, 2, 2, 2}}, {36, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData174_SOBEL_5X5_08U[] = {{40, 6, 4, 0, {2, 2, 2, 2}}, {40, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData175_SOBEL_5X5_08U[] = {{44, 6, 4, 0, {2, 2, 2, 2}}, {44, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData176_SOBEL_5X5_08U[] = {{48, 6, 4, 0, {2, 2, 2, 2}}, {48, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData177_SOBEL_5X5_08U[] = {{52, 6, 4, 0, {2, 2, 2, 2}}, {52, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData178_SOBEL_5X5_08U[] = {{56, 6, 4, 0, {2, 2, 2, 2}}, {56, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData179_SOBEL_5X5_08U[] = {{60, 6, 4, 0, {2, 2, 2, 2}}, {60, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData180_SOBEL_5X5_08U[] = {{64, 6, 4, 0, {2, 2, 2, 2}}, {64, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData181_SOBEL_5X5_08U[] = {{72, 6, 4, 0, {2, 2, 2, 2}}, {72, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData182_SOBEL_5X5_08U[] = {{80, 6, 4, 0, {2, 2, 2, 2}}, {80, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData183_SOBEL_5X5_08U[] = {{88, 6, 4, 0, {2, 2, 2, 2}}, {88, 6, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData184_SOBEL_5X5_08U[] = {{2, 8, 4, 0, {2, 2, 2, 2}}, {2, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData185_SOBEL_5X5_08U[] = {{4, 8, 4, 0, {2, 2, 2, 2}}, {4, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData186_SOBEL_5X5_08U[] = {{6, 8, 4, 0, {2, 2, 2, 2}}, {6, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData187_SOBEL_5X5_08U[] = {{8, 8, 4, 0, {2, 2, 2, 2}}, {8, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData188_SOBEL_5X5_08U[] = {{10, 8, 4, 0, {2, 2, 2, 2}}, {10, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData189_SOBEL_5X5_08U[] = {{12, 8, 4, 0, {2, 2, 2, 2}}, {12, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData190_SOBEL_5X5_08U[] = {{14, 8, 4, 0, {2, 2, 2, 2}}, {14, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData191_SOBEL_5X5_08U[] = {{16, 8, 4, 0, {2, 2, 2, 2}}, {16, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData192_SOBEL_5X5_08U[] = {{18, 8, 4, 0, {2, 2, 2, 2}}, {18, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData193_SOBEL_5X5_08U[] = {{20, 8, 4, 0, {2, 2, 2, 2}}, {20, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData194_SOBEL_5X5_08U[] = {{22, 8, 4, 0, {2, 2, 2, 2}}, {22, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData195_SOBEL_5X5_08U[] = {{24, 8, 4, 0, {2, 2, 2, 2}}, {24, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData196_SOBEL_5X5_08U[] = {{26, 8, 4, 0, {2, 2, 2, 2}}, {26, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData197_SOBEL_5X5_08U[] = {{28, 8, 4, 0, {2, 2, 2, 2}}, {28, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData198_SOBEL_5X5_08U[] = {{30, 8, 4, 0, {2, 2, 2, 2}}, {30, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData199_SOBEL_5X5_08U[] = {{32, 8, 4, 0, {2, 2, 2, 2}}, {32, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData200_SOBEL_5X5_08U[] = {{36, 8, 4, 0, {2, 2, 2, 2}}, {36, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData201_SOBEL_5X5_08U[] = {{40, 8, 4, 0, {2, 2, 2, 2}}, {40, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData202_SOBEL_5X5_08U[] = {{44, 8, 4, 0, {2, 2, 2, 2}}, {44, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData203_SOBEL_5X5_08U[] = {{48, 8, 4, 0, {2, 2, 2, 2}}, {48, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData204_SOBEL_5X5_08U[] = {{52, 8, 4, 0, {2, 2, 2, 2}}, {52, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData205_SOBEL_5X5_08U[] = {{56, 8, 4, 0, {2, 2, 2, 2}}, {56, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData206_SOBEL_5X5_08U[] = {{60, 8, 4, 0, {2, 2, 2, 2}}, {60, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData207_SOBEL_5X5_08U[] = {{64, 8, 4, 0, {2, 2, 2, 2}}, {64, 8, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData208_SOBEL_5X5_08U[] = {{2, 10, 4, 0, {2, 2, 2, 2}}, {2, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData209_SOBEL_5X5_08U[] = {{4, 10, 4, 0, {2, 2, 2, 2}}, {4, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData210_SOBEL_5X5_08U[] = {{6, 10, 4, 0, {2, 2, 2, 2}}, {6, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData211_SOBEL_5X5_08U[] = {{8, 10, 4, 0, {2, 2, 2, 2}}, {8, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData212_SOBEL_5X5_08U[] = {{10, 10, 4, 0, {2, 2, 2, 2}}, {10, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData213_SOBEL_5X5_08U[] = {{12, 10, 4, 0, {2, 2, 2, 2}}, {12, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData214_SOBEL_5X5_08U[] = {{14, 10, 4, 0, {2, 2, 2, 2}}, {14, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData215_SOBEL_5X5_08U[] = {{16, 10, 4, 0, {2, 2, 2, 2}}, {16, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData216_SOBEL_5X5_08U[] = {{18, 10, 4, 0, {2, 2, 2, 2}}, {18, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData217_SOBEL_5X5_08U[] = {{20, 10, 4, 0, {2, 2, 2, 2}}, {20, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData218_SOBEL_5X5_08U[] = {{22, 10, 4, 0, {2, 2, 2, 2}}, {22, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData219_SOBEL_5X5_08U[] = {{24, 10, 4, 0, {2, 2, 2, 2}}, {24, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData220_SOBEL_5X5_08U[] = {{26, 10, 4, 0, {2, 2, 2, 2}}, {26, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData221_SOBEL_5X5_08U[] = {{28, 10, 4, 0, {2, 2, 2, 2}}, {28, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData222_SOBEL_5X5_08U[] = {{30, 10, 4, 0, {2, 2, 2, 2}}, {30, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData223_SOBEL_5X5_08U[] = {{32, 10, 4, 0, {2, 2, 2, 2}}, {32, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData224_SOBEL_5X5_08U[] = {{36, 10, 4, 0, {2, 2, 2, 2}}, {36, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData225_SOBEL_5X5_08U[] = {{40, 10, 4, 0, {2, 2, 2, 2}}, {40, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData226_SOBEL_5X5_08U[] = {{44, 10, 4, 0, {2, 2, 2, 2}}, {44, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData227_SOBEL_5X5_08U[] = {{48, 10, 4, 0, {2, 2, 2, 2}}, {48, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData228_SOBEL_5X5_08U[] = {{52, 10, 4, 0, {2, 2, 2, 2}}, {52, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData229_SOBEL_5X5_08U[] = {{56, 10, 4, 0, {2, 2, 2, 2}}, {56, 10, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData230_SOBEL_5X5_08U[] = {{2, 12, 4, 0, {2, 2, 2, 2}}, {2, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData231_SOBEL_5X5_08U[] = {{4, 12, 4, 0, {2, 2, 2, 2}}, {4, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData232_SOBEL_5X5_08U[] = {{6, 12, 4, 0, {2, 2, 2, 2}}, {6, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData233_SOBEL_5X5_08U[] = {{8, 12, 4, 0, {2, 2, 2, 2}}, {8, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData234_SOBEL_5X5_08U[] = {{10, 12, 4, 0, {2, 2, 2, 2}}, {10, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData235_SOBEL_5X5_08U[] = {{12, 12, 4, 0, {2, 2, 2, 2}}, {12, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData236_SOBEL_5X5_08U[] = {{14, 12, 4, 0, {2, 2, 2, 2}}, {14, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData237_SOBEL_5X5_08U[] = {{16, 12, 4, 0, {2, 2, 2, 2}}, {16, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData238_SOBEL_5X5_08U[] = {{18, 12, 4, 0, {2, 2, 2, 2}}, {18, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData239_SOBEL_5X5_08U[] = {{20, 12, 4, 0, {2, 2, 2, 2}}, {20, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData240_SOBEL_5X5_08U[] = {{22, 12, 4, 0, {2, 2, 2, 2}}, {22, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData241_SOBEL_5X5_08U[] = {{24, 12, 4, 0, {2, 2, 2, 2}}, {24, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData242_SOBEL_5X5_08U[] = {{26, 12, 4, 0, {2, 2, 2, 2}}, {26, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData243_SOBEL_5X5_08U[] = {{28, 12, 4, 0, {2, 2, 2, 2}}, {28, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData244_SOBEL_5X5_08U[] = {{30, 12, 4, 0, {2, 2, 2, 2}}, {30, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData245_SOBEL_5X5_08U[] = {{32, 12, 4, 0, {2, 2, 2, 2}}, {32, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData246_SOBEL_5X5_08U[] = {{36, 12, 4, 0, {2, 2, 2, 2}}, {36, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData247_SOBEL_5X5_08U[] = {{40, 12, 4, 0, {2, 2, 2, 2}}, {40, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData248_SOBEL_5X5_08U[] = {{44, 12, 4, 0, {2, 2, 2, 2}}, {44, 12, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData249_SOBEL_5X5_08U[] = {{2, 14, 4, 0, {2, 2, 2, 2}}, {2, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData250_SOBEL_5X5_08U[] = {{4, 14, 4, 0, {2, 2, 2, 2}}, {4, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData251_SOBEL_5X5_08U[] = {{6, 14, 4, 0, {2, 2, 2, 2}}, {6, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData252_SOBEL_5X5_08U[] = {{8, 14, 4, 0, {2, 2, 2, 2}}, {8, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData253_SOBEL_5X5_08U[] = {{10, 14, 4, 0, {2, 2, 2, 2}}, {10, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData254_SOBEL_5X5_08U[] = {{12, 14, 4, 0, {2, 2, 2, 2}}, {12, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData255_SOBEL_5X5_08U[] = {{14, 14, 4, 0, {2, 2, 2, 2}}, {14, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData256_SOBEL_5X5_08U[] = {{16, 14, 4, 0, {2, 2, 2, 2}}, {16, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData257_SOBEL_5X5_08U[] = {{18, 14, 4, 0, {2, 2, 2, 2}}, {18, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData258_SOBEL_5X5_08U[] = {{20, 14, 4, 0, {2, 2, 2, 2}}, {20, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData259_SOBEL_5X5_08U[] = {{22, 14, 4, 0, {2, 2, 2, 2}}, {22, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData260_SOBEL_5X5_08U[] = {{24, 14, 4, 0, {2, 2, 2, 2}}, {24, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData261_SOBEL_5X5_08U[] = {{26, 14, 4, 0, {2, 2, 2, 2}}, {26, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData262_SOBEL_5X5_08U[] = {{28, 14, 4, 0, {2, 2, 2, 2}}, {28, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData263_SOBEL_5X5_08U[] = {{30, 14, 4, 0, {2, 2, 2, 2}}, {30, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData264_SOBEL_5X5_08U[] = {{32, 14, 4, 0, {2, 2, 2, 2}}, {32, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData265_SOBEL_5X5_08U[] = {{36, 14, 4, 0, {2, 2, 2, 2}}, {36, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData266_SOBEL_5X5_08U[] = {{40, 14, 4, 0, {2, 2, 2, 2}}, {40, 14, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData267_SOBEL_5X5_08U[] = {{2, 16, 4, 0, {2, 2, 2, 2}}, {2, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData268_SOBEL_5X5_08U[] = {{4, 16, 4, 0, {2, 2, 2, 2}}, {4, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData269_SOBEL_5X5_08U[] = {{6, 16, 4, 0, {2, 2, 2, 2}}, {6, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData270_SOBEL_5X5_08U[] = {{8, 16, 4, 0, {2, 2, 2, 2}}, {8, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData271_SOBEL_5X5_08U[] = {{10, 16, 4, 0, {2, 2, 2, 2}}, {10, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData272_SOBEL_5X5_08U[] = {{12, 16, 4, 0, {2, 2, 2, 2}}, {12, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData273_SOBEL_5X5_08U[] = {{14, 16, 4, 0, {2, 2, 2, 2}}, {14, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData274_SOBEL_5X5_08U[] = {{16, 16, 4, 0, {2, 2, 2, 2}}, {16, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData275_SOBEL_5X5_08U[] = {{18, 16, 4, 0, {2, 2, 2, 2}}, {18, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData276_SOBEL_5X5_08U[] = {{20, 16, 4, 0, {2, 2, 2, 2}}, {20, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData277_SOBEL_5X5_08U[] = {{22, 16, 4, 0, {2, 2, 2, 2}}, {22, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData278_SOBEL_5X5_08U[] = {{24, 16, 4, 0, {2, 2, 2, 2}}, {24, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData279_SOBEL_5X5_08U[] = {{26, 16, 4, 0, {2, 2, 2, 2}}, {26, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData280_SOBEL_5X5_08U[] = {{28, 16, 4, 0, {2, 2, 2, 2}}, {28, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData281_SOBEL_5X5_08U[] = {{30, 16, 4, 0, {2, 2, 2, 2}}, {30, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData282_SOBEL_5X5_08U[] = {{32, 16, 4, 0, {2, 2, 2, 2}}, {32, 16, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData283_SOBEL_5X5_08U[] = {{2, 18, 4, 0, {2, 2, 2, 2}}, {2, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData284_SOBEL_5X5_08U[] = {{4, 18, 4, 0, {2, 2, 2, 2}}, {4, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData285_SOBEL_5X5_08U[] = {{6, 18, 4, 0, {2, 2, 2, 2}}, {6, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData286_SOBEL_5X5_08U[] = {{8, 18, 4, 0, {2, 2, 2, 2}}, {8, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData287_SOBEL_5X5_08U[] = {{10, 18, 4, 0, {2, 2, 2, 2}}, {10, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData288_SOBEL_5X5_08U[] = {{12, 18, 4, 0, {2, 2, 2, 2}}, {12, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData289_SOBEL_5X5_08U[] = {{14, 18, 4, 0, {2, 2, 2, 2}}, {14, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData290_SOBEL_5X5_08U[] = {{16, 18, 4, 0, {2, 2, 2, 2}}, {16, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData291_SOBEL_5X5_08U[] = {{18, 18, 4, 0, {2, 2, 2, 2}}, {18, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData292_SOBEL_5X5_08U[] = {{20, 18, 4, 0, {2, 2, 2, 2}}, {20, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData293_SOBEL_5X5_08U[] = {{22, 18, 4, 0, {2, 2, 2, 2}}, {22, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData294_SOBEL_5X5_08U[] = {{24, 18, 4, 0, {2, 2, 2, 2}}, {24, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData295_SOBEL_5X5_08U[] = {{26, 18, 4, 0, {2, 2, 2, 2}}, {26, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData296_SOBEL_5X5_08U[] = {{28, 18, 4, 0, {2, 2, 2, 2}}, {28, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData297_SOBEL_5X5_08U[] = {{30, 18, 4, 0, {2, 2, 2, 2}}, {30, 18, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData298_SOBEL_5X5_08U[] = {{2, 20, 4, 0, {2, 2, 2, 2}}, {2, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData299_SOBEL_5X5_08U[] = {{4, 20, 4, 0, {2, 2, 2, 2}}, {4, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData300_SOBEL_5X5_08U[] = {{6, 20, 4, 0, {2, 2, 2, 2}}, {6, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData301_SOBEL_5X5_08U[] = {{8, 20, 4, 0, {2, 2, 2, 2}}, {8, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData302_SOBEL_5X5_08U[] = {{10, 20, 4, 0, {2, 2, 2, 2}}, {10, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData303_SOBEL_5X5_08U[] = {{12, 20, 4, 0, {2, 2, 2, 2}}, {12, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData304_SOBEL_5X5_08U[] = {{14, 20, 4, 0, {2, 2, 2, 2}}, {14, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData305_SOBEL_5X5_08U[] = {{16, 20, 4, 0, {2, 2, 2, 2}}, {16, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData306_SOBEL_5X5_08U[] = {{18, 20, 4, 0, {2, 2, 2, 2}}, {18, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData307_SOBEL_5X5_08U[] = {{20, 20, 4, 0, {2, 2, 2, 2}}, {20, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData308_SOBEL_5X5_08U[] = {{22, 20, 4, 0, {2, 2, 2, 2}}, {22, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData309_SOBEL_5X5_08U[] = {{24, 20, 4, 0, {2, 2, 2, 2}}, {24, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData310_SOBEL_5X5_08U[] = {{26, 20, 4, 0, {2, 2, 2, 2}}, {26, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData311_SOBEL_5X5_08U[] = {{28, 20, 4, 0, {2, 2, 2, 2}}, {28, 20, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData312_SOBEL_5X5_08U[] = {{2, 22, 4, 0, {2, 2, 2, 2}}, {2, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData313_SOBEL_5X5_08U[] = {{4, 22, 4, 0, {2, 2, 2, 2}}, {4, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData314_SOBEL_5X5_08U[] = {{6, 22, 4, 0, {2, 2, 2, 2}}, {6, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData315_SOBEL_5X5_08U[] = {{8, 22, 4, 0, {2, 2, 2, 2}}, {8, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData316_SOBEL_5X5_08U[] = {{10, 22, 4, 0, {2, 2, 2, 2}}, {10, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData317_SOBEL_5X5_08U[] = {{12, 22, 4, 0, {2, 2, 2, 2}}, {12, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData318_SOBEL_5X5_08U[] = {{14, 22, 4, 0, {2, 2, 2, 2}}, {14, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData319_SOBEL_5X5_08U[] = {{16, 22, 4, 0, {2, 2, 2, 2}}, {16, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData320_SOBEL_5X5_08U[] = {{18, 22, 4, 0, {2, 2, 2, 2}}, {18, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData321_SOBEL_5X5_08U[] = {{20, 22, 4, 0, {2, 2, 2, 2}}, {20, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData322_SOBEL_5X5_08U[] = {{22, 22, 4, 0, {2, 2, 2, 2}}, {22, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData323_SOBEL_5X5_08U[] = {{24, 22, 4, 0, {2, 2, 2, 2}}, {24, 22, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData324_SOBEL_5X5_08U[] = {{2, 24, 4, 0, {2, 2, 2, 2}}, {2, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData325_SOBEL_5X5_08U[] = {{4, 24, 4, 0, {2, 2, 2, 2}}, {4, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData326_SOBEL_5X5_08U[] = {{6, 24, 4, 0, {2, 2, 2, 2}}, {6, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData327_SOBEL_5X5_08U[] = {{8, 24, 4, 0, {2, 2, 2, 2}}, {8, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData328_SOBEL_5X5_08U[] = {{10, 24, 4, 0, {2, 2, 2, 2}}, {10, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData329_SOBEL_5X5_08U[] = {{12, 24, 4, 0, {2, 2, 2, 2}}, {12, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData330_SOBEL_5X5_08U[] = {{14, 24, 4, 0, {2, 2, 2, 2}}, {14, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData331_SOBEL_5X5_08U[] = {{16, 24, 4, 0, {2, 2, 2, 2}}, {16, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData332_SOBEL_5X5_08U[] = {{18, 24, 4, 0, {2, 2, 2, 2}}, {18, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData333_SOBEL_5X5_08U[] = {{20, 24, 4, 0, {2, 2, 2, 2}}, {20, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData334_SOBEL_5X5_08U[] = {{22, 24, 4, 0, {2, 2, 2, 2}}, {22, 24, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData335_SOBEL_5X5_08U[] = {{2, 26, 4, 0, {2, 2, 2, 2}}, {2, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData336_SOBEL_5X5_08U[] = {{4, 26, 4, 0, {2, 2, 2, 2}}, {4, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData337_SOBEL_5X5_08U[] = {{6, 26, 4, 0, {2, 2, 2, 2}}, {6, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData338_SOBEL_5X5_08U[] = {{8, 26, 4, 0, {2, 2, 2, 2}}, {8, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData339_SOBEL_5X5_08U[] = {{10, 26, 4, 0, {2, 2, 2, 2}}, {10, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData340_SOBEL_5X5_08U[] = {{12, 26, 4, 0, {2, 2, 2, 2}}, {12, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData341_SOBEL_5X5_08U[] = {{14, 26, 4, 0, {2, 2, 2, 2}}, {14, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData342_SOBEL_5X5_08U[] = {{16, 26, 4, 0, {2, 2, 2, 2}}, {16, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData343_SOBEL_5X5_08U[] = {{18, 26, 4, 0, {2, 2, 2, 2}}, {18, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData344_SOBEL_5X5_08U[] = {{20, 26, 4, 0, {2, 2, 2, 2}}, {20, 26, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData345_SOBEL_5X5_08U[] = {{2, 28, 4, 0, {2, 2, 2, 2}}, {2, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData346_SOBEL_5X5_08U[] = {{4, 28, 4, 0, {2, 2, 2, 2}}, {4, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData347_SOBEL_5X5_08U[] = {{6, 28, 4, 0, {2, 2, 2, 2}}, {6, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData348_SOBEL_5X5_08U[] = {{8, 28, 4, 0, {2, 2, 2, 2}}, {8, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData349_SOBEL_5X5_08U[] = {{10, 28, 4, 0, {2, 2, 2, 2}}, {10, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData350_SOBEL_5X5_08U[] = {{12, 28, 4, 0, {2, 2, 2, 2}}, {12, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData351_SOBEL_5X5_08U[] = {{14, 28, 4, 0, {2, 2, 2, 2}}, {14, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData352_SOBEL_5X5_08U[] = {{16, 28, 4, 0, {2, 2, 2, 2}}, {16, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData353_SOBEL_5X5_08U[] = {{18, 28, 4, 0, {2, 2, 2, 2}}, {18, 28, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData354_SOBEL_5X5_08U[] = {{2, 30, 4, 0, {2, 2, 2, 2}}, {2, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData355_SOBEL_5X5_08U[] = {{4, 30, 4, 0, {2, 2, 2, 2}}, {4, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData356_SOBEL_5X5_08U[] = {{6, 30, 4, 0, {2, 2, 2, 2}}, {6, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData357_SOBEL_5X5_08U[] = {{8, 30, 4, 0, {2, 2, 2, 2}}, {8, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData358_SOBEL_5X5_08U[] = {{10, 30, 4, 0, {2, 2, 2, 2}}, {10, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData359_SOBEL_5X5_08U[] = {{12, 30, 4, 0, {2, 2, 2, 2}}, {12, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData360_SOBEL_5X5_08U[] = {{14, 30, 4, 0, {2, 2, 2, 2}}, {14, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData361_SOBEL_5X5_08U[] = {{16, 30, 4, 0, {2, 2, 2, 2}}, {16, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData362_SOBEL_5X5_08U[] = {{18, 30, 4, 0, {2, 2, 2, 2}}, {18, 30, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData363_SOBEL_5X5_08U[] = {{2, 32, 4, 0, {2, 2, 2, 2}}, {2, 32, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData364_SOBEL_5X5_08U[] = {{4, 32, 4, 0, {2, 2, 2, 2}}, {4, 32, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData365_SOBEL_5X5_08U[] = {{6, 32, 4, 0, {2, 2, 2, 2}}, {6, 32, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData366_SOBEL_5X5_08U[] = {{8, 32, 4, 0, {2, 2, 2, 2}}, {8, 32, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData367_SOBEL_5X5_08U[] = {{10, 32, 4, 0, {2, 2, 2, 2}}, {10, 32, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData368_SOBEL_5X5_08U[] = {{12, 32, 4, 0, {2, 2, 2, 2}}, {12, 32, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData369_SOBEL_5X5_08U[] = {{14, 32, 4, 0, {2, 2, 2, 2}}, {14, 32, 2, 1, {0, 0, 0, 0}}};
static acf_scenario_buffer_data gScenarioBufferData370_SOBEL_5X5_08U[] = {{16, 32, 4, 0, {2, 2, 2, 2}}, {16, 32, 2, 1, {0, 0, 0, 0}}};

static acf_scenario_kernel_data gScenarioKernelData0_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData1_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData2_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData3_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData4_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData5_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData6_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData7_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData8_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData9_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData10_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData11_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData12_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData13_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData14_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData15_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData16_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData17_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData18_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData19_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData20_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData21_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData22_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData23_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData24_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData25_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData26_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData27_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData28_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData29_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData30_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData31_SOBEL_5X5_08U[] = {{2, 0}};
static acf_scenario_kernel_data gScenarioKernelData32_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData33_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData34_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData35_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData36_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData37_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData38_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData39_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData40_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData41_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData42_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData43_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData44_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData45_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData46_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData47_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData48_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData49_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData50_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData51_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData52_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData53_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData54_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData55_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData56_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData57_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData58_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData59_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData60_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData61_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData62_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData63_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData64_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData65_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData66_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData67_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData68_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData69_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData70_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData71_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData72_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData73_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData74_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData75_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData76_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData77_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData78_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData79_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData80_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData81_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData82_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData83_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData84_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData85_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData86_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData87_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData88_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData89_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData90_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData91_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData92_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData93_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData94_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData95_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData96_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData97_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData98_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData99_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData100_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData101_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData102_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData103_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData104_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData105_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData106_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData107_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData108_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData109_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData110_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData111_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData112_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData113_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData114_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData115_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData116_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData117_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData118_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData119_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData120_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData121_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData122_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData123_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData124_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData125_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData126_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData127_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData128_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData129_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData130_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData131_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData132_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData133_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData134_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData135_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData136_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData137_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData138_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData139_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData140_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData141_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData142_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData143_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData144_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData145_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData146_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData147_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData148_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData149_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData150_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData151_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData152_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData153_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData154_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData155_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData156_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData157_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData158_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData159_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData160_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData161_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData162_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData163_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData164_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData165_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData166_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData167_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData168_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData169_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData170_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData171_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData172_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData173_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData174_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData175_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData176_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData177_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData178_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData179_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData180_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData181_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData182_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData183_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData184_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData185_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData186_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData187_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData188_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData189_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData190_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData191_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData192_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData193_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData194_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData195_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData196_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData197_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData198_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData199_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData200_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData201_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData202_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData203_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData204_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData205_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData206_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData207_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData208_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData209_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData210_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData211_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData212_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData213_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData214_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData215_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData216_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData217_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData218_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData219_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData220_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData221_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData222_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData223_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData224_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData225_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData226_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData227_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData228_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData229_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData230_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData231_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData232_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData233_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData234_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData235_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData236_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData237_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData238_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData239_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData240_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData241_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData242_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData243_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData244_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData245_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData246_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData247_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData248_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData249_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData250_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData251_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData252_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData253_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData254_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData255_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData256_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData257_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData258_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData259_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData260_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData261_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData262_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData263_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData264_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData265_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData266_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData267_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData268_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData269_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData270_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData271_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData272_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData273_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData274_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData275_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData276_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData277_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData278_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData279_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData280_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData281_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData282_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData283_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData284_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData285_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData286_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData287_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData288_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData289_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData290_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData291_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData292_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData293_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData294_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData295_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData296_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData297_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData298_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData299_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData300_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData301_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData302_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData303_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData304_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData305_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData306_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData307_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData308_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData309_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData310_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData311_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData312_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData313_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData314_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData315_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData316_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData317_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData318_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData319_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData320_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData321_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData322_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData323_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData324_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData325_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData326_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData327_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData328_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData329_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData330_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData331_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData332_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData333_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData334_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData335_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData336_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData337_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData338_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData339_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData340_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData341_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData342_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData343_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData344_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData345_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData346_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData347_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData348_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData349_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData350_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData351_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData352_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData353_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData354_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData355_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData356_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData357_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData358_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData359_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData360_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData361_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData362_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData363_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData364_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData365_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData366_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData367_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData368_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData369_SOBEL_5X5_08U[] = {{1, 0}};
static acf_scenario_kernel_data gScenarioKernelData370_SOBEL_5X5_08U[] = {{1, 0}};

static acf_scenario gScenarioArray_SOBEL_5X5_08U[] = {
{2, 1, 72, 0, 2, gScenarioBufferData0_SOBEL_5X5_08U, 32, gScenarioKernelData0_SOBEL_5X5_08U, 4},
{4, 1, 96, 0, 2, gScenarioBufferData1_SOBEL_5X5_08U, 32, gScenarioKernelData1_SOBEL_5X5_08U, 4},
{6, 1, 124, 0, 2, gScenarioBufferData2_SOBEL_5X5_08U, 32, gScenarioKernelData2_SOBEL_5X5_08U, 4},
{8, 1, 148, 0, 2, gScenarioBufferData3_SOBEL_5X5_08U, 32, gScenarioKernelData3_SOBEL_5X5_08U, 4},
{10, 1, 176, 0, 2, gScenarioBufferData4_SOBEL_5X5_08U, 32, gScenarioKernelData4_SOBEL_5X5_08U, 4},
{12, 1, 200, 0, 2, gScenarioBufferData5_SOBEL_5X5_08U, 32, gScenarioKernelData5_SOBEL_5X5_08U, 4},
{14, 1, 228, 0, 2, gScenarioBufferData6_SOBEL_5X5_08U, 32, gScenarioKernelData6_SOBEL_5X5_08U, 4},
{16, 1, 252, 0, 2, gScenarioBufferData7_SOBEL_5X5_08U, 32, gScenarioKernelData7_SOBEL_5X5_08U, 4},
{18, 1, 280, 0, 2, gScenarioBufferData8_SOBEL_5X5_08U, 32, gScenarioKernelData8_SOBEL_5X5_08U, 4},
{20, 1, 304, 0, 2, gScenarioBufferData9_SOBEL_5X5_08U, 32, gScenarioKernelData9_SOBEL_5X5_08U, 4},
{22, 1, 332, 0, 2, gScenarioBufferData10_SOBEL_5X5_08U, 32, gScenarioKernelData10_SOBEL_5X5_08U, 4},
{24, 1, 356, 0, 2, gScenarioBufferData11_SOBEL_5X5_08U, 32, gScenarioKernelData11_SOBEL_5X5_08U, 4},
{26, 1, 384, 0, 2, gScenarioBufferData12_SOBEL_5X5_08U, 32, gScenarioKernelData12_SOBEL_5X5_08U, 4},
{28, 1, 408, 0, 2, gScenarioBufferData13_SOBEL_5X5_08U, 32, gScenarioKernelData13_SOBEL_5X5_08U, 4},
{30, 1, 436, 0, 2, gScenarioBufferData14_SOBEL_5X5_08U, 32, gScenarioKernelData14_SOBEL_5X5_08U, 4},
{32, 1, 460, 0, 2, gScenarioBufferData15_SOBEL_5X5_08U, 32, gScenarioKernelData15_SOBEL_5X5_08U, 4},
{36, 1, 512, 0, 2, gScenarioBufferData16_SOBEL_5X5_08U, 32, gScenarioKernelData16_SOBEL_5X5_08U, 4},
{40, 1, 564, 0, 2, gScenarioBufferData17_SOBEL_5X5_08U, 32, gScenarioKernelData17_SOBEL_5X5_08U, 4},
{44, 1, 616, 0, 2, gScenarioBufferData18_SOBEL_5X5_08U, 32, gScenarioKernelData18_SOBEL_5X5_08U, 4},
{48, 1, 668, 0, 2, gScenarioBufferData19_SOBEL_5X5_08U, 32, gScenarioKernelData19_SOBEL_5X5_08U, 4},
{52, 1, 720, 0, 2, gScenarioBufferData20_SOBEL_5X5_08U, 32, gScenarioKernelData20_SOBEL_5X5_08U, 4},
{56, 1, 772, 0, 2, gScenarioBufferData21_SOBEL_5X5_08U, 32, gScenarioKernelData21_SOBEL_5X5_08U, 4},
{60, 1, 824, 0, 2, gScenarioBufferData22_SOBEL_5X5_08U, 32, gScenarioKernelData22_SOBEL_5X5_08U, 4},
{64, 1, 876, 0, 2, gScenarioBufferData23_SOBEL_5X5_08U, 32, gScenarioKernelData23_SOBEL_5X5_08U, 4},
{72, 1, 980, 0, 2, gScenarioBufferData24_SOBEL_5X5_08U, 32, gScenarioKernelData24_SOBEL_5X5_08U, 4},
{80, 1, 1084, 0, 2, gScenarioBufferData25_SOBEL_5X5_08U, 32, gScenarioKernelData25_SOBEL_5X5_08U, 4},
{88, 1, 1188, 0, 2, gScenarioBufferData26_SOBEL_5X5_08U, 32, gScenarioKernelData26_SOBEL_5X5_08U, 4},
{96, 1, 1292, 0, 2, gScenarioBufferData27_SOBEL_5X5_08U, 32, gScenarioKernelData27_SOBEL_5X5_08U, 4},
{104, 1, 1396, 0, 2, gScenarioBufferData28_SOBEL_5X5_08U, 32, gScenarioKernelData28_SOBEL_5X5_08U, 4},
{112, 1, 1500, 0, 2, gScenarioBufferData29_SOBEL_5X5_08U, 32, gScenarioKernelData29_SOBEL_5X5_08U, 4},
{120, 1, 1604, 0, 2, gScenarioBufferData30_SOBEL_5X5_08U, 32, gScenarioKernelData30_SOBEL_5X5_08U, 4},
{128, 1, 1708, 0, 2, gScenarioBufferData31_SOBEL_5X5_08U, 32, gScenarioKernelData31_SOBEL_5X5_08U, 4},
{2, 2, 80, 0, 1, gScenarioBufferData32_SOBEL_5X5_08U, 32, gScenarioKernelData32_SOBEL_5X5_08U, 4},
{4, 2, 112, 0, 1, gScenarioBufferData33_SOBEL_5X5_08U, 32, gScenarioKernelData33_SOBEL_5X5_08U, 4},
{6, 2, 144, 0, 1, gScenarioBufferData34_SOBEL_5X5_08U, 32, gScenarioKernelData34_SOBEL_5X5_08U, 4},
{8, 2, 176, 0, 1, gScenarioBufferData35_SOBEL_5X5_08U, 32, gScenarioKernelData35_SOBEL_5X5_08U, 4},
{10, 2, 208, 0, 1, gScenarioBufferData36_SOBEL_5X5_08U, 32, gScenarioKernelData36_SOBEL_5X5_08U, 4},
{12, 2, 240, 0, 1, gScenarioBufferData37_SOBEL_5X5_08U, 32, gScenarioKernelData37_SOBEL_5X5_08U, 4},
{14, 2, 272, 0, 1, gScenarioBufferData38_SOBEL_5X5_08U, 32, gScenarioKernelData38_SOBEL_5X5_08U, 4},
{16, 2, 304, 0, 1, gScenarioBufferData39_SOBEL_5X5_08U, 32, gScenarioKernelData39_SOBEL_5X5_08U, 4},
{18, 2, 336, 0, 1, gScenarioBufferData40_SOBEL_5X5_08U, 32, gScenarioKernelData40_SOBEL_5X5_08U, 4},
{20, 2, 368, 0, 1, gScenarioBufferData41_SOBEL_5X5_08U, 32, gScenarioKernelData41_SOBEL_5X5_08U, 4},
{22, 2, 400, 0, 1, gScenarioBufferData42_SOBEL_5X5_08U, 32, gScenarioKernelData42_SOBEL_5X5_08U, 4},
{24, 2, 432, 0, 1, gScenarioBufferData43_SOBEL_5X5_08U, 32, gScenarioKernelData43_SOBEL_5X5_08U, 4},
{26, 2, 464, 0, 1, gScenarioBufferData44_SOBEL_5X5_08U, 32, gScenarioKernelData44_SOBEL_5X5_08U, 4},
{28, 2, 496, 0, 1, gScenarioBufferData45_SOBEL_5X5_08U, 32, gScenarioKernelData45_SOBEL_5X5_08U, 4},
{30, 2, 528, 0, 1, gScenarioBufferData46_SOBEL_5X5_08U, 32, gScenarioKernelData46_SOBEL_5X5_08U, 4},
{32, 2, 560, 0, 1, gScenarioBufferData47_SOBEL_5X5_08U, 32, gScenarioKernelData47_SOBEL_5X5_08U, 4},
{36, 2, 624, 0, 1, gScenarioBufferData48_SOBEL_5X5_08U, 32, gScenarioKernelData48_SOBEL_5X5_08U, 4},
{40, 2, 688, 0, 1, gScenarioBufferData49_SOBEL_5X5_08U, 32, gScenarioKernelData49_SOBEL_5X5_08U, 4},
{44, 2, 752, 0, 1, gScenarioBufferData50_SOBEL_5X5_08U, 32, gScenarioKernelData50_SOBEL_5X5_08U, 4},
{48, 2, 816, 0, 1, gScenarioBufferData51_SOBEL_5X5_08U, 32, gScenarioKernelData51_SOBEL_5X5_08U, 4},
{52, 2, 880, 0, 1, gScenarioBufferData52_SOBEL_5X5_08U, 32, gScenarioKernelData52_SOBEL_5X5_08U, 4},
{56, 2, 944, 0, 1, gScenarioBufferData53_SOBEL_5X5_08U, 32, gScenarioKernelData53_SOBEL_5X5_08U, 4},
{60, 2, 1008, 0, 1, gScenarioBufferData54_SOBEL_5X5_08U, 32, gScenarioKernelData54_SOBEL_5X5_08U, 4},
{64, 2, 1072, 0, 1, gScenarioBufferData55_SOBEL_5X5_08U, 32, gScenarioKernelData55_SOBEL_5X5_08U, 4},
{72, 2, 1200, 0, 1, gScenarioBufferData56_SOBEL_5X5_08U, 32, gScenarioKernelData56_SOBEL_5X5_08U, 4},
{80, 2, 1328, 0, 1, gScenarioBufferData57_SOBEL_5X5_08U, 32, gScenarioKernelData57_SOBEL_5X5_08U, 4},
{88, 2, 1456, 0, 1, gScenarioBufferData58_SOBEL_5X5_08U, 32, gScenarioKernelData58_SOBEL_5X5_08U, 4},
{96, 2, 1584, 0, 1, gScenarioBufferData59_SOBEL_5X5_08U, 32, gScenarioKernelData59_SOBEL_5X5_08U, 4},
{104, 2, 1712, 0, 1, gScenarioBufferData60_SOBEL_5X5_08U, 32, gScenarioKernelData60_SOBEL_5X5_08U, 4},
{112, 2, 1840, 0, 1, gScenarioBufferData61_SOBEL_5X5_08U, 32, gScenarioKernelData61_SOBEL_5X5_08U, 4},
{120, 2, 1968, 0, 1, gScenarioBufferData62_SOBEL_5X5_08U, 32, gScenarioKernelData62_SOBEL_5X5_08U, 4},
{128, 2, 2096, 0, 1, gScenarioBufferData63_SOBEL_5X5_08U, 32, gScenarioKernelData63_SOBEL_5X5_08U, 4},
{2, 3, 108, 0, 1, gScenarioBufferData64_SOBEL_5X5_08U, 32, gScenarioKernelData64_SOBEL_5X5_08U, 4},
{4, 3, 152, 0, 1, gScenarioBufferData65_SOBEL_5X5_08U, 32, gScenarioKernelData65_SOBEL_5X5_08U, 4},
{6, 3, 196, 0, 1, gScenarioBufferData66_SOBEL_5X5_08U, 32, gScenarioKernelData66_SOBEL_5X5_08U, 4},
{8, 3, 240, 0, 1, gScenarioBufferData67_SOBEL_5X5_08U, 32, gScenarioKernelData67_SOBEL_5X5_08U, 4},
{10, 3, 284, 0, 1, gScenarioBufferData68_SOBEL_5X5_08U, 32, gScenarioKernelData68_SOBEL_5X5_08U, 4},
{12, 3, 328, 0, 1, gScenarioBufferData69_SOBEL_5X5_08U, 32, gScenarioKernelData69_SOBEL_5X5_08U, 4},
{14, 3, 372, 0, 1, gScenarioBufferData70_SOBEL_5X5_08U, 32, gScenarioKernelData70_SOBEL_5X5_08U, 4},
{16, 3, 416, 0, 1, gScenarioBufferData71_SOBEL_5X5_08U, 32, gScenarioKernelData71_SOBEL_5X5_08U, 4},
{18, 3, 460, 0, 1, gScenarioBufferData72_SOBEL_5X5_08U, 32, gScenarioKernelData72_SOBEL_5X5_08U, 4},
{20, 3, 504, 0, 1, gScenarioBufferData73_SOBEL_5X5_08U, 32, gScenarioKernelData73_SOBEL_5X5_08U, 4},
{22, 3, 548, 0, 1, gScenarioBufferData74_SOBEL_5X5_08U, 32, gScenarioKernelData74_SOBEL_5X5_08U, 4},
{24, 3, 592, 0, 1, gScenarioBufferData75_SOBEL_5X5_08U, 32, gScenarioKernelData75_SOBEL_5X5_08U, 4},
{26, 3, 636, 0, 1, gScenarioBufferData76_SOBEL_5X5_08U, 32, gScenarioKernelData76_SOBEL_5X5_08U, 4},
{28, 3, 680, 0, 1, gScenarioBufferData77_SOBEL_5X5_08U, 32, gScenarioKernelData77_SOBEL_5X5_08U, 4},
{30, 3, 724, 0, 1, gScenarioBufferData78_SOBEL_5X5_08U, 32, gScenarioKernelData78_SOBEL_5X5_08U, 4},
{32, 3, 768, 0, 1, gScenarioBufferData79_SOBEL_5X5_08U, 32, gScenarioKernelData79_SOBEL_5X5_08U, 4},
{36, 3, 856, 0, 1, gScenarioBufferData80_SOBEL_5X5_08U, 32, gScenarioKernelData80_SOBEL_5X5_08U, 4},
{40, 3, 944, 0, 1, gScenarioBufferData81_SOBEL_5X5_08U, 32, gScenarioKernelData81_SOBEL_5X5_08U, 4},
{44, 3, 1032, 0, 1, gScenarioBufferData82_SOBEL_5X5_08U, 32, gScenarioKernelData82_SOBEL_5X5_08U, 4},
{48, 3, 1120, 0, 1, gScenarioBufferData83_SOBEL_5X5_08U, 32, gScenarioKernelData83_SOBEL_5X5_08U, 4},
{52, 3, 1208, 0, 1, gScenarioBufferData84_SOBEL_5X5_08U, 32, gScenarioKernelData84_SOBEL_5X5_08U, 4},
{56, 3, 1296, 0, 1, gScenarioBufferData85_SOBEL_5X5_08U, 32, gScenarioKernelData85_SOBEL_5X5_08U, 4},
{60, 3, 1384, 0, 1, gScenarioBufferData86_SOBEL_5X5_08U, 32, gScenarioKernelData86_SOBEL_5X5_08U, 4},
{64, 3, 1472, 0, 1, gScenarioBufferData87_SOBEL_5X5_08U, 32, gScenarioKernelData87_SOBEL_5X5_08U, 4},
{72, 3, 1648, 0, 1, gScenarioBufferData88_SOBEL_5X5_08U, 32, gScenarioKernelData88_SOBEL_5X5_08U, 4},
{80, 3, 1824, 0, 1, gScenarioBufferData89_SOBEL_5X5_08U, 32, gScenarioKernelData89_SOBEL_5X5_08U, 4},
{88, 3, 2000, 0, 1, gScenarioBufferData90_SOBEL_5X5_08U, 32, gScenarioKernelData90_SOBEL_5X5_08U, 4},
{96, 3, 2176, 0, 1, gScenarioBufferData91_SOBEL_5X5_08U, 32, gScenarioKernelData91_SOBEL_5X5_08U, 4},
{104, 3, 2352, 0, 1, gScenarioBufferData92_SOBEL_5X5_08U, 32, gScenarioKernelData92_SOBEL_5X5_08U, 4},
{112, 3, 2528, 0, 1, gScenarioBufferData93_SOBEL_5X5_08U, 32, gScenarioKernelData93_SOBEL_5X5_08U, 4},
{120, 3, 2704, 0, 1, gScenarioBufferData94_SOBEL_5X5_08U, 32, gScenarioKernelData94_SOBEL_5X5_08U, 4},
{128, 3, 2880, 0, 1, gScenarioBufferData95_SOBEL_5X5_08U, 32, gScenarioKernelData95_SOBEL_5X5_08U, 4},
{2, 4, 136, 0, 1, gScenarioBufferData96_SOBEL_5X5_08U, 32, gScenarioKernelData96_SOBEL_5X5_08U, 4},
{4, 4, 192, 0, 1, gScenarioBufferData97_SOBEL_5X5_08U, 32, gScenarioKernelData97_SOBEL_5X5_08U, 4},
{6, 4, 248, 0, 1, gScenarioBufferData98_SOBEL_5X5_08U, 32, gScenarioKernelData98_SOBEL_5X5_08U, 4},
{8, 4, 304, 0, 1, gScenarioBufferData99_SOBEL_5X5_08U, 32, gScenarioKernelData99_SOBEL_5X5_08U, 4},
{10, 4, 360, 0, 1, gScenarioBufferData100_SOBEL_5X5_08U, 32, gScenarioKernelData100_SOBEL_5X5_08U, 4},
{12, 4, 416, 0, 1, gScenarioBufferData101_SOBEL_5X5_08U, 32, gScenarioKernelData101_SOBEL_5X5_08U, 4},
{14, 4, 472, 0, 1, gScenarioBufferData102_SOBEL_5X5_08U, 32, gScenarioKernelData102_SOBEL_5X5_08U, 4},
{16, 4, 528, 0, 1, gScenarioBufferData103_SOBEL_5X5_08U, 32, gScenarioKernelData103_SOBEL_5X5_08U, 4},
{18, 4, 584, 0, 1, gScenarioBufferData104_SOBEL_5X5_08U, 32, gScenarioKernelData104_SOBEL_5X5_08U, 4},
{20, 4, 640, 0, 1, gScenarioBufferData105_SOBEL_5X5_08U, 32, gScenarioKernelData105_SOBEL_5X5_08U, 4},
{22, 4, 696, 0, 1, gScenarioBufferData106_SOBEL_5X5_08U, 32, gScenarioKernelData106_SOBEL_5X5_08U, 4},
{24, 4, 752, 0, 1, gScenarioBufferData107_SOBEL_5X5_08U, 32, gScenarioKernelData107_SOBEL_5X5_08U, 4},
{26, 4, 808, 0, 1, gScenarioBufferData108_SOBEL_5X5_08U, 32, gScenarioKernelData108_SOBEL_5X5_08U, 4},
{28, 4, 864, 0, 1, gScenarioBufferData109_SOBEL_5X5_08U, 32, gScenarioKernelData109_SOBEL_5X5_08U, 4},
{30, 4, 920, 0, 1, gScenarioBufferData110_SOBEL_5X5_08U, 32, gScenarioKernelData110_SOBEL_5X5_08U, 4},
{32, 4, 976, 0, 1, gScenarioBufferData111_SOBEL_5X5_08U, 32, gScenarioKernelData111_SOBEL_5X5_08U, 4},
{36, 4, 1088, 0, 1, gScenarioBufferData112_SOBEL_5X5_08U, 32, gScenarioKernelData112_SOBEL_5X5_08U, 4},
{40, 4, 1200, 0, 1, gScenarioBufferData113_SOBEL_5X5_08U, 32, gScenarioKernelData113_SOBEL_5X5_08U, 4},
{44, 4, 1312, 0, 1, gScenarioBufferData114_SOBEL_5X5_08U, 32, gScenarioKernelData114_SOBEL_5X5_08U, 4},
{48, 4, 1424, 0, 1, gScenarioBufferData115_SOBEL_5X5_08U, 32, gScenarioKernelData115_SOBEL_5X5_08U, 4},
{52, 4, 1536, 0, 1, gScenarioBufferData116_SOBEL_5X5_08U, 32, gScenarioKernelData116_SOBEL_5X5_08U, 4},
{56, 4, 1648, 0, 1, gScenarioBufferData117_SOBEL_5X5_08U, 32, gScenarioKernelData117_SOBEL_5X5_08U, 4},
{60, 4, 1760, 0, 1, gScenarioBufferData118_SOBEL_5X5_08U, 32, gScenarioKernelData118_SOBEL_5X5_08U, 4},
{64, 4, 1872, 0, 1, gScenarioBufferData119_SOBEL_5X5_08U, 32, gScenarioKernelData119_SOBEL_5X5_08U, 4},
{72, 4, 2096, 0, 1, gScenarioBufferData120_SOBEL_5X5_08U, 32, gScenarioKernelData120_SOBEL_5X5_08U, 4},
{80, 4, 2320, 0, 1, gScenarioBufferData121_SOBEL_5X5_08U, 32, gScenarioKernelData121_SOBEL_5X5_08U, 4},
{88, 4, 2544, 0, 1, gScenarioBufferData122_SOBEL_5X5_08U, 32, gScenarioKernelData122_SOBEL_5X5_08U, 4},
{96, 4, 2768, 0, 1, gScenarioBufferData123_SOBEL_5X5_08U, 32, gScenarioKernelData123_SOBEL_5X5_08U, 4},
{104, 4, 2992, 0, 1, gScenarioBufferData124_SOBEL_5X5_08U, 32, gScenarioKernelData124_SOBEL_5X5_08U, 4},
{112, 4, 3216, 0, 1, gScenarioBufferData125_SOBEL_5X5_08U, 32, gScenarioKernelData125_SOBEL_5X5_08U, 4},
{120, 4, 3440, 0, 1, gScenarioBufferData126_SOBEL_5X5_08U, 32, gScenarioKernelData126_SOBEL_5X5_08U, 4},
{128, 4, 3664, 0, 1, gScenarioBufferData127_SOBEL_5X5_08U, 32, gScenarioKernelData127_SOBEL_5X5_08U, 4},
{2, 5, 164, 0, 1, gScenarioBufferData128_SOBEL_5X5_08U, 32, gScenarioKernelData128_SOBEL_5X5_08U, 4},
{4, 5, 232, 0, 1, gScenarioBufferData129_SOBEL_5X5_08U, 32, gScenarioKernelData129_SOBEL_5X5_08U, 4},
{6, 5, 300, 0, 1, gScenarioBufferData130_SOBEL_5X5_08U, 32, gScenarioKernelData130_SOBEL_5X5_08U, 4},
{8, 5, 368, 0, 1, gScenarioBufferData131_SOBEL_5X5_08U, 32, gScenarioKernelData131_SOBEL_5X5_08U, 4},
{10, 5, 436, 0, 1, gScenarioBufferData132_SOBEL_5X5_08U, 32, gScenarioKernelData132_SOBEL_5X5_08U, 4},
{12, 5, 504, 0, 1, gScenarioBufferData133_SOBEL_5X5_08U, 32, gScenarioKernelData133_SOBEL_5X5_08U, 4},
{14, 5, 572, 0, 1, gScenarioBufferData134_SOBEL_5X5_08U, 32, gScenarioKernelData134_SOBEL_5X5_08U, 4},
{16, 5, 640, 0, 1, gScenarioBufferData135_SOBEL_5X5_08U, 32, gScenarioKernelData135_SOBEL_5X5_08U, 4},
{18, 5, 708, 0, 1, gScenarioBufferData136_SOBEL_5X5_08U, 32, gScenarioKernelData136_SOBEL_5X5_08U, 4},
{20, 5, 776, 0, 1, gScenarioBufferData137_SOBEL_5X5_08U, 32, gScenarioKernelData137_SOBEL_5X5_08U, 4},
{22, 5, 844, 0, 1, gScenarioBufferData138_SOBEL_5X5_08U, 32, gScenarioKernelData138_SOBEL_5X5_08U, 4},
{24, 5, 912, 0, 1, gScenarioBufferData139_SOBEL_5X5_08U, 32, gScenarioKernelData139_SOBEL_5X5_08U, 4},
{26, 5, 980, 0, 1, gScenarioBufferData140_SOBEL_5X5_08U, 32, gScenarioKernelData140_SOBEL_5X5_08U, 4},
{28, 5, 1048, 0, 1, gScenarioBufferData141_SOBEL_5X5_08U, 32, gScenarioKernelData141_SOBEL_5X5_08U, 4},
{30, 5, 1116, 0, 1, gScenarioBufferData142_SOBEL_5X5_08U, 32, gScenarioKernelData142_SOBEL_5X5_08U, 4},
{32, 5, 1184, 0, 1, gScenarioBufferData143_SOBEL_5X5_08U, 32, gScenarioKernelData143_SOBEL_5X5_08U, 4},
{36, 5, 1320, 0, 1, gScenarioBufferData144_SOBEL_5X5_08U, 32, gScenarioKernelData144_SOBEL_5X5_08U, 4},
{40, 5, 1456, 0, 1, gScenarioBufferData145_SOBEL_5X5_08U, 32, gScenarioKernelData145_SOBEL_5X5_08U, 4},
{44, 5, 1592, 0, 1, gScenarioBufferData146_SOBEL_5X5_08U, 32, gScenarioKernelData146_SOBEL_5X5_08U, 4},
{48, 5, 1728, 0, 1, gScenarioBufferData147_SOBEL_5X5_08U, 32, gScenarioKernelData147_SOBEL_5X5_08U, 4},
{52, 5, 1864, 0, 1, gScenarioBufferData148_SOBEL_5X5_08U, 32, gScenarioKernelData148_SOBEL_5X5_08U, 4},
{56, 5, 2000, 0, 1, gScenarioBufferData149_SOBEL_5X5_08U, 32, gScenarioKernelData149_SOBEL_5X5_08U, 4},
{60, 5, 2136, 0, 1, gScenarioBufferData150_SOBEL_5X5_08U, 32, gScenarioKernelData150_SOBEL_5X5_08U, 4},
{64, 5, 2272, 0, 1, gScenarioBufferData151_SOBEL_5X5_08U, 32, gScenarioKernelData151_SOBEL_5X5_08U, 4},
{72, 5, 2544, 0, 1, gScenarioBufferData152_SOBEL_5X5_08U, 32, gScenarioKernelData152_SOBEL_5X5_08U, 4},
{80, 5, 2816, 0, 1, gScenarioBufferData153_SOBEL_5X5_08U, 32, gScenarioKernelData153_SOBEL_5X5_08U, 4},
{88, 5, 3088, 0, 1, gScenarioBufferData154_SOBEL_5X5_08U, 32, gScenarioKernelData154_SOBEL_5X5_08U, 4},
{96, 5, 3360, 0, 1, gScenarioBufferData155_SOBEL_5X5_08U, 32, gScenarioKernelData155_SOBEL_5X5_08U, 4},
{104, 5, 3632, 0, 1, gScenarioBufferData156_SOBEL_5X5_08U, 32, gScenarioKernelData156_SOBEL_5X5_08U, 4},
{2, 6, 192, 0, 1, gScenarioBufferData157_SOBEL_5X5_08U, 32, gScenarioKernelData157_SOBEL_5X5_08U, 4},
{4, 6, 272, 0, 1, gScenarioBufferData158_SOBEL_5X5_08U, 32, gScenarioKernelData158_SOBEL_5X5_08U, 4},
{6, 6, 352, 0, 1, gScenarioBufferData159_SOBEL_5X5_08U, 32, gScenarioKernelData159_SOBEL_5X5_08U, 4},
{8, 6, 432, 0, 1, gScenarioBufferData160_SOBEL_5X5_08U, 32, gScenarioKernelData160_SOBEL_5X5_08U, 4},
{10, 6, 512, 0, 1, gScenarioBufferData161_SOBEL_5X5_08U, 32, gScenarioKernelData161_SOBEL_5X5_08U, 4},
{12, 6, 592, 0, 1, gScenarioBufferData162_SOBEL_5X5_08U, 32, gScenarioKernelData162_SOBEL_5X5_08U, 4},
{14, 6, 672, 0, 1, gScenarioBufferData163_SOBEL_5X5_08U, 32, gScenarioKernelData163_SOBEL_5X5_08U, 4},
{16, 6, 752, 0, 1, gScenarioBufferData164_SOBEL_5X5_08U, 32, gScenarioKernelData164_SOBEL_5X5_08U, 4},
{18, 6, 832, 0, 1, gScenarioBufferData165_SOBEL_5X5_08U, 32, gScenarioKernelData165_SOBEL_5X5_08U, 4},
{20, 6, 912, 0, 1, gScenarioBufferData166_SOBEL_5X5_08U, 32, gScenarioKernelData166_SOBEL_5X5_08U, 4},
{22, 6, 992, 0, 1, gScenarioBufferData167_SOBEL_5X5_08U, 32, gScenarioKernelData167_SOBEL_5X5_08U, 4},
{24, 6, 1072, 0, 1, gScenarioBufferData168_SOBEL_5X5_08U, 32, gScenarioKernelData168_SOBEL_5X5_08U, 4},
{26, 6, 1152, 0, 1, gScenarioBufferData169_SOBEL_5X5_08U, 32, gScenarioKernelData169_SOBEL_5X5_08U, 4},
{28, 6, 1232, 0, 1, gScenarioBufferData170_SOBEL_5X5_08U, 32, gScenarioKernelData170_SOBEL_5X5_08U, 4},
{30, 6, 1312, 0, 1, gScenarioBufferData171_SOBEL_5X5_08U, 32, gScenarioKernelData171_SOBEL_5X5_08U, 4},
{32, 6, 1392, 0, 1, gScenarioBufferData172_SOBEL_5X5_08U, 32, gScenarioKernelData172_SOBEL_5X5_08U, 4},
{36, 6, 1552, 0, 1, gScenarioBufferData173_SOBEL_5X5_08U, 32, gScenarioKernelData173_SOBEL_5X5_08U, 4},
{40, 6, 1712, 0, 1, gScenarioBufferData174_SOBEL_5X5_08U, 32, gScenarioKernelData174_SOBEL_5X5_08U, 4},
{44, 6, 1872, 0, 1, gScenarioBufferData175_SOBEL_5X5_08U, 32, gScenarioKernelData175_SOBEL_5X5_08U, 4},
{48, 6, 2032, 0, 1, gScenarioBufferData176_SOBEL_5X5_08U, 32, gScenarioKernelData176_SOBEL_5X5_08U, 4},
{52, 6, 2192, 0, 1, gScenarioBufferData177_SOBEL_5X5_08U, 32, gScenarioKernelData177_SOBEL_5X5_08U, 4},
{56, 6, 2352, 0, 1, gScenarioBufferData178_SOBEL_5X5_08U, 32, gScenarioKernelData178_SOBEL_5X5_08U, 4},
{60, 6, 2512, 0, 1, gScenarioBufferData179_SOBEL_5X5_08U, 32, gScenarioKernelData179_SOBEL_5X5_08U, 4},
{64, 6, 2672, 0, 1, gScenarioBufferData180_SOBEL_5X5_08U, 32, gScenarioKernelData180_SOBEL_5X5_08U, 4},
{72, 6, 2992, 0, 1, gScenarioBufferData181_SOBEL_5X5_08U, 32, gScenarioKernelData181_SOBEL_5X5_08U, 4},
{80, 6, 3312, 0, 1, gScenarioBufferData182_SOBEL_5X5_08U, 32, gScenarioKernelData182_SOBEL_5X5_08U, 4},
{88, 6, 3632, 0, 1, gScenarioBufferData183_SOBEL_5X5_08U, 32, gScenarioKernelData183_SOBEL_5X5_08U, 4},
{2, 8, 248, 0, 1, gScenarioBufferData184_SOBEL_5X5_08U, 32, gScenarioKernelData184_SOBEL_5X5_08U, 4},
{4, 8, 352, 0, 1, gScenarioBufferData185_SOBEL_5X5_08U, 32, gScenarioKernelData185_SOBEL_5X5_08U, 4},
{6, 8, 456, 0, 1, gScenarioBufferData186_SOBEL_5X5_08U, 32, gScenarioKernelData186_SOBEL_5X5_08U, 4},
{8, 8, 560, 0, 1, gScenarioBufferData187_SOBEL_5X5_08U, 32, gScenarioKernelData187_SOBEL_5X5_08U, 4},
{10, 8, 664, 0, 1, gScenarioBufferData188_SOBEL_5X5_08U, 32, gScenarioKernelData188_SOBEL_5X5_08U, 4},
{12, 8, 768, 0, 1, gScenarioBufferData189_SOBEL_5X5_08U, 32, gScenarioKernelData189_SOBEL_5X5_08U, 4},
{14, 8, 872, 0, 1, gScenarioBufferData190_SOBEL_5X5_08U, 32, gScenarioKernelData190_SOBEL_5X5_08U, 4},
{16, 8, 976, 0, 1, gScenarioBufferData191_SOBEL_5X5_08U, 32, gScenarioKernelData191_SOBEL_5X5_08U, 4},
{18, 8, 1080, 0, 1, gScenarioBufferData192_SOBEL_5X5_08U, 32, gScenarioKernelData192_SOBEL_5X5_08U, 4},
{20, 8, 1184, 0, 1, gScenarioBufferData193_SOBEL_5X5_08U, 32, gScenarioKernelData193_SOBEL_5X5_08U, 4},
{22, 8, 1288, 0, 1, gScenarioBufferData194_SOBEL_5X5_08U, 32, gScenarioKernelData194_SOBEL_5X5_08U, 4},
{24, 8, 1392, 0, 1, gScenarioBufferData195_SOBEL_5X5_08U, 32, gScenarioKernelData195_SOBEL_5X5_08U, 4},
{26, 8, 1496, 0, 1, gScenarioBufferData196_SOBEL_5X5_08U, 32, gScenarioKernelData196_SOBEL_5X5_08U, 4},
{28, 8, 1600, 0, 1, gScenarioBufferData197_SOBEL_5X5_08U, 32, gScenarioKernelData197_SOBEL_5X5_08U, 4},
{30, 8, 1704, 0, 1, gScenarioBufferData198_SOBEL_5X5_08U, 32, gScenarioKernelData198_SOBEL_5X5_08U, 4},
{32, 8, 1808, 0, 1, gScenarioBufferData199_SOBEL_5X5_08U, 32, gScenarioKernelData199_SOBEL_5X5_08U, 4},
{36, 8, 2016, 0, 1, gScenarioBufferData200_SOBEL_5X5_08U, 32, gScenarioKernelData200_SOBEL_5X5_08U, 4},
{40, 8, 2224, 0, 1, gScenarioBufferData201_SOBEL_5X5_08U, 32, gScenarioKernelData201_SOBEL_5X5_08U, 4},
{44, 8, 2432, 0, 1, gScenarioBufferData202_SOBEL_5X5_08U, 32, gScenarioKernelData202_SOBEL_5X5_08U, 4},
{48, 8, 2640, 0, 1, gScenarioBufferData203_SOBEL_5X5_08U, 32, gScenarioKernelData203_SOBEL_5X5_08U, 4},
{52, 8, 2848, 0, 1, gScenarioBufferData204_SOBEL_5X5_08U, 32, gScenarioKernelData204_SOBEL_5X5_08U, 4},
{56, 8, 3056, 0, 1, gScenarioBufferData205_SOBEL_5X5_08U, 32, gScenarioKernelData205_SOBEL_5X5_08U, 4},
{60, 8, 3264, 0, 1, gScenarioBufferData206_SOBEL_5X5_08U, 32, gScenarioKernelData206_SOBEL_5X5_08U, 4},
{64, 8, 3472, 0, 1, gScenarioBufferData207_SOBEL_5X5_08U, 32, gScenarioKernelData207_SOBEL_5X5_08U, 4},
{2, 10, 304, 0, 1, gScenarioBufferData208_SOBEL_5X5_08U, 32, gScenarioKernelData208_SOBEL_5X5_08U, 4},
{4, 10, 432, 0, 1, gScenarioBufferData209_SOBEL_5X5_08U, 32, gScenarioKernelData209_SOBEL_5X5_08U, 4},
{6, 10, 560, 0, 1, gScenarioBufferData210_SOBEL_5X5_08U, 32, gScenarioKernelData210_SOBEL_5X5_08U, 4},
{8, 10, 688, 0, 1, gScenarioBufferData211_SOBEL_5X5_08U, 32, gScenarioKernelData211_SOBEL_5X5_08U, 4},
{10, 10, 816, 0, 1, gScenarioBufferData212_SOBEL_5X5_08U, 32, gScenarioKernelData212_SOBEL_5X5_08U, 4},
{12, 10, 944, 0, 1, gScenarioBufferData213_SOBEL_5X5_08U, 32, gScenarioKernelData213_SOBEL_5X5_08U, 4},
{14, 10, 1072, 0, 1, gScenarioBufferData214_SOBEL_5X5_08U, 32, gScenarioKernelData214_SOBEL_5X5_08U, 4},
{16, 10, 1200, 0, 1, gScenarioBufferData215_SOBEL_5X5_08U, 32, gScenarioKernelData215_SOBEL_5X5_08U, 4},
{18, 10, 1328, 0, 1, gScenarioBufferData216_SOBEL_5X5_08U, 32, gScenarioKernelData216_SOBEL_5X5_08U, 4},
{20, 10, 1456, 0, 1, gScenarioBufferData217_SOBEL_5X5_08U, 32, gScenarioKernelData217_SOBEL_5X5_08U, 4},
{22, 10, 1584, 0, 1, gScenarioBufferData218_SOBEL_5X5_08U, 32, gScenarioKernelData218_SOBEL_5X5_08U, 4},
{24, 10, 1712, 0, 1, gScenarioBufferData219_SOBEL_5X5_08U, 32, gScenarioKernelData219_SOBEL_5X5_08U, 4},
{26, 10, 1840, 0, 1, gScenarioBufferData220_SOBEL_5X5_08U, 32, gScenarioKernelData220_SOBEL_5X5_08U, 4},
{28, 10, 1968, 0, 1, gScenarioBufferData221_SOBEL_5X5_08U, 32, gScenarioKernelData221_SOBEL_5X5_08U, 4},
{30, 10, 2096, 0, 1, gScenarioBufferData222_SOBEL_5X5_08U, 32, gScenarioKernelData222_SOBEL_5X5_08U, 4},
{32, 10, 2224, 0, 1, gScenarioBufferData223_SOBEL_5X5_08U, 32, gScenarioKernelData223_SOBEL_5X5_08U, 4},
{36, 10, 2480, 0, 1, gScenarioBufferData224_SOBEL_5X5_08U, 32, gScenarioKernelData224_SOBEL_5X5_08U, 4},
{40, 10, 2736, 0, 1, gScenarioBufferData225_SOBEL_5X5_08U, 32, gScenarioKernelData225_SOBEL_5X5_08U, 4},
{44, 10, 2992, 0, 1, gScenarioBufferData226_SOBEL_5X5_08U, 32, gScenarioKernelData226_SOBEL_5X5_08U, 4},
{48, 10, 3248, 0, 1, gScenarioBufferData227_SOBEL_5X5_08U, 32, gScenarioKernelData227_SOBEL_5X5_08U, 4},
{52, 10, 3504, 0, 1, gScenarioBufferData228_SOBEL_5X5_08U, 32, gScenarioKernelData228_SOBEL_5X5_08U, 4},
{56, 10, 3760, 0, 1, gScenarioBufferData229_SOBEL_5X5_08U, 32, gScenarioKernelData229_SOBEL_5X5_08U, 4},
{2, 12, 360, 0, 1, gScenarioBufferData230_SOBEL_5X5_08U, 32, gScenarioKernelData230_SOBEL_5X5_08U, 4},
{4, 12, 512, 0, 1, gScenarioBufferData231_SOBEL_5X5_08U, 32, gScenarioKernelData231_SOBEL_5X5_08U, 4},
{6, 12, 664, 0, 1, gScenarioBufferData232_SOBEL_5X5_08U, 32, gScenarioKernelData232_SOBEL_5X5_08U, 4},
{8, 12, 816, 0, 1, gScenarioBufferData233_SOBEL_5X5_08U, 32, gScenarioKernelData233_SOBEL_5X5_08U, 4},
{10, 12, 968, 0, 1, gScenarioBufferData234_SOBEL_5X5_08U, 32, gScenarioKernelData234_SOBEL_5X5_08U, 4},
{12, 12, 1120, 0, 1, gScenarioBufferData235_SOBEL_5X5_08U, 32, gScenarioKernelData235_SOBEL_5X5_08U, 4},
{14, 12, 1272, 0, 1, gScenarioBufferData236_SOBEL_5X5_08U, 32, gScenarioKernelData236_SOBEL_5X5_08U, 4},
{16, 12, 1424, 0, 1, gScenarioBufferData237_SOBEL_5X5_08U, 32, gScenarioKernelData237_SOBEL_5X5_08U, 4},
{18, 12, 1576, 0, 1, gScenarioBufferData238_SOBEL_5X5_08U, 32, gScenarioKernelData238_SOBEL_5X5_08U, 4},
{20, 12, 1728, 0, 1, gScenarioBufferData239_SOBEL_5X5_08U, 32, gScenarioKernelData239_SOBEL_5X5_08U, 4},
{22, 12, 1880, 0, 1, gScenarioBufferData240_SOBEL_5X5_08U, 32, gScenarioKernelData240_SOBEL_5X5_08U, 4},
{24, 12, 2032, 0, 1, gScenarioBufferData241_SOBEL_5X5_08U, 32, gScenarioKernelData241_SOBEL_5X5_08U, 4},
{26, 12, 2184, 0, 1, gScenarioBufferData242_SOBEL_5X5_08U, 32, gScenarioKernelData242_SOBEL_5X5_08U, 4},
{28, 12, 2336, 0, 1, gScenarioBufferData243_SOBEL_5X5_08U, 32, gScenarioKernelData243_SOBEL_5X5_08U, 4},
{30, 12, 2488, 0, 1, gScenarioBufferData244_SOBEL_5X5_08U, 32, gScenarioKernelData244_SOBEL_5X5_08U, 4},
{32, 12, 2640, 0, 1, gScenarioBufferData245_SOBEL_5X5_08U, 32, gScenarioKernelData245_SOBEL_5X5_08U, 4},
{36, 12, 2944, 0, 1, gScenarioBufferData246_SOBEL_5X5_08U, 32, gScenarioKernelData246_SOBEL_5X5_08U, 4},
{40, 12, 3248, 0, 1, gScenarioBufferData247_SOBEL_5X5_08U, 32, gScenarioKernelData247_SOBEL_5X5_08U, 4},
{44, 12, 3552, 0, 1, gScenarioBufferData248_SOBEL_5X5_08U, 32, gScenarioKernelData248_SOBEL_5X5_08U, 4},
{2, 14, 416, 0, 1, gScenarioBufferData249_SOBEL_5X5_08U, 32, gScenarioKernelData249_SOBEL_5X5_08U, 4},
{4, 14, 592, 0, 1, gScenarioBufferData250_SOBEL_5X5_08U, 32, gScenarioKernelData250_SOBEL_5X5_08U, 4},
{6, 14, 768, 0, 1, gScenarioBufferData251_SOBEL_5X5_08U, 32, gScenarioKernelData251_SOBEL_5X5_08U, 4},
{8, 14, 944, 0, 1, gScenarioBufferData252_SOBEL_5X5_08U, 32, gScenarioKernelData252_SOBEL_5X5_08U, 4},
{10, 14, 1120, 0, 1, gScenarioBufferData253_SOBEL_5X5_08U, 32, gScenarioKernelData253_SOBEL_5X5_08U, 4},
{12, 14, 1296, 0, 1, gScenarioBufferData254_SOBEL_5X5_08U, 32, gScenarioKernelData254_SOBEL_5X5_08U, 4},
{14, 14, 1472, 0, 1, gScenarioBufferData255_SOBEL_5X5_08U, 32, gScenarioKernelData255_SOBEL_5X5_08U, 4},
{16, 14, 1648, 0, 1, gScenarioBufferData256_SOBEL_5X5_08U, 32, gScenarioKernelData256_SOBEL_5X5_08U, 4},
{18, 14, 1824, 0, 1, gScenarioBufferData257_SOBEL_5X5_08U, 32, gScenarioKernelData257_SOBEL_5X5_08U, 4},
{20, 14, 2000, 0, 1, gScenarioBufferData258_SOBEL_5X5_08U, 32, gScenarioKernelData258_SOBEL_5X5_08U, 4},
{22, 14, 2176, 0, 1, gScenarioBufferData259_SOBEL_5X5_08U, 32, gScenarioKernelData259_SOBEL_5X5_08U, 4},
{24, 14, 2352, 0, 1, gScenarioBufferData260_SOBEL_5X5_08U, 32, gScenarioKernelData260_SOBEL_5X5_08U, 4},
{26, 14, 2528, 0, 1, gScenarioBufferData261_SOBEL_5X5_08U, 32, gScenarioKernelData261_SOBEL_5X5_08U, 4},
{28, 14, 2704, 0, 1, gScenarioBufferData262_SOBEL_5X5_08U, 32, gScenarioKernelData262_SOBEL_5X5_08U, 4},
{30, 14, 2880, 0, 1, gScenarioBufferData263_SOBEL_5X5_08U, 32, gScenarioKernelData263_SOBEL_5X5_08U, 4},
{32, 14, 3056, 0, 1, gScenarioBufferData264_SOBEL_5X5_08U, 32, gScenarioKernelData264_SOBEL_5X5_08U, 4},
{36, 14, 3408, 0, 1, gScenarioBufferData265_SOBEL_5X5_08U, 32, gScenarioKernelData265_SOBEL_5X5_08U, 4},
{40, 14, 3760, 0, 1, gScenarioBufferData266_SOBEL_5X5_08U, 32, gScenarioKernelData266_SOBEL_5X5_08U, 4},
{2, 16, 472, 0, 1, gScenarioBufferData267_SOBEL_5X5_08U, 32, gScenarioKernelData267_SOBEL_5X5_08U, 4},
{4, 16, 672, 0, 1, gScenarioBufferData268_SOBEL_5X5_08U, 32, gScenarioKernelData268_SOBEL_5X5_08U, 4},
{6, 16, 872, 0, 1, gScenarioBufferData269_SOBEL_5X5_08U, 32, gScenarioKernelData269_SOBEL_5X5_08U, 4},
{8, 16, 1072, 0, 1, gScenarioBufferData270_SOBEL_5X5_08U, 32, gScenarioKernelData270_SOBEL_5X5_08U, 4},
{10, 16, 1272, 0, 1, gScenarioBufferData271_SOBEL_5X5_08U, 32, gScenarioKernelData271_SOBEL_5X5_08U, 4},
{12, 16, 1472, 0, 1, gScenarioBufferData272_SOBEL_5X5_08U, 32, gScenarioKernelData272_SOBEL_5X5_08U, 4},
{14, 16, 1672, 0, 1, gScenarioBufferData273_SOBEL_5X5_08U, 32, gScenarioKernelData273_SOBEL_5X5_08U, 4},
{16, 16, 1872, 0, 1, gScenarioBufferData274_SOBEL_5X5_08U, 32, gScenarioKernelData274_SOBEL_5X5_08U, 4},
{18, 16, 2072, 0, 1, gScenarioBufferData275_SOBEL_5X5_08U, 32, gScenarioKernelData275_SOBEL_5X5_08U, 4},
{20, 16, 2272, 0, 1, gScenarioBufferData276_SOBEL_5X5_08U, 32, gScenarioKernelData276_SOBEL_5X5_08U, 4},
{22, 16, 2472, 0, 1, gScenarioBufferData277_SOBEL_5X5_08U, 32, gScenarioKernelData277_SOBEL_5X5_08U, 4},
{24, 16, 2672, 0, 1, gScenarioBufferData278_SOBEL_5X5_08U, 32, gScenarioKernelData278_SOBEL_5X5_08U, 4},
{26, 16, 2872, 0, 1, gScenarioBufferData279_SOBEL_5X5_08U, 32, gScenarioKernelData279_SOBEL_5X5_08U, 4},
{28, 16, 3072, 0, 1, gScenarioBufferData280_SOBEL_5X5_08U, 32, gScenarioKernelData280_SOBEL_5X5_08U, 4},
{30, 16, 3272, 0, 1, gScenarioBufferData281_SOBEL_5X5_08U, 32, gScenarioKernelData281_SOBEL_5X5_08U, 4},
{32, 16, 3472, 0, 1, gScenarioBufferData282_SOBEL_5X5_08U, 32, gScenarioKernelData282_SOBEL_5X5_08U, 4},
{2, 18, 528, 0, 1, gScenarioBufferData283_SOBEL_5X5_08U, 32, gScenarioKernelData283_SOBEL_5X5_08U, 4},
{4, 18, 752, 0, 1, gScenarioBufferData284_SOBEL_5X5_08U, 32, gScenarioKernelData284_SOBEL_5X5_08U, 4},
{6, 18, 976, 0, 1, gScenarioBufferData285_SOBEL_5X5_08U, 32, gScenarioKernelData285_SOBEL_5X5_08U, 4},
{8, 18, 1200, 0, 1, gScenarioBufferData286_SOBEL_5X5_08U, 32, gScenarioKernelData286_SOBEL_5X5_08U, 4},
{10, 18, 1424, 0, 1, gScenarioBufferData287_SOBEL_5X5_08U, 32, gScenarioKernelData287_SOBEL_5X5_08U, 4},
{12, 18, 1648, 0, 1, gScenarioBufferData288_SOBEL_5X5_08U, 32, gScenarioKernelData288_SOBEL_5X5_08U, 4},
{14, 18, 1872, 0, 1, gScenarioBufferData289_SOBEL_5X5_08U, 32, gScenarioKernelData289_SOBEL_5X5_08U, 4},
{16, 18, 2096, 0, 1, gScenarioBufferData290_SOBEL_5X5_08U, 32, gScenarioKernelData290_SOBEL_5X5_08U, 4},
{18, 18, 2320, 0, 1, gScenarioBufferData291_SOBEL_5X5_08U, 32, gScenarioKernelData291_SOBEL_5X5_08U, 4},
{20, 18, 2544, 0, 1, gScenarioBufferData292_SOBEL_5X5_08U, 32, gScenarioKernelData292_SOBEL_5X5_08U, 4},
{22, 18, 2768, 0, 1, gScenarioBufferData293_SOBEL_5X5_08U, 32, gScenarioKernelData293_SOBEL_5X5_08U, 4},
{24, 18, 2992, 0, 1, gScenarioBufferData294_SOBEL_5X5_08U, 32, gScenarioKernelData294_SOBEL_5X5_08U, 4},
{26, 18, 3216, 0, 1, gScenarioBufferData295_SOBEL_5X5_08U, 32, gScenarioKernelData295_SOBEL_5X5_08U, 4},
{28, 18, 3440, 0, 1, gScenarioBufferData296_SOBEL_5X5_08U, 32, gScenarioKernelData296_SOBEL_5X5_08U, 4},
{30, 18, 3664, 0, 1, gScenarioBufferData297_SOBEL_5X5_08U, 32, gScenarioKernelData297_SOBEL_5X5_08U, 4},
{2, 20, 584, 0, 1, gScenarioBufferData298_SOBEL_5X5_08U, 32, gScenarioKernelData298_SOBEL_5X5_08U, 4},
{4, 20, 832, 0, 1, gScenarioBufferData299_SOBEL_5X5_08U, 32, gScenarioKernelData299_SOBEL_5X5_08U, 4},
{6, 20, 1080, 0, 1, gScenarioBufferData300_SOBEL_5X5_08U, 32, gScenarioKernelData300_SOBEL_5X5_08U, 4},
{8, 20, 1328, 0, 1, gScenarioBufferData301_SOBEL_5X5_08U, 32, gScenarioKernelData301_SOBEL_5X5_08U, 4},
{10, 20, 1576, 0, 1, gScenarioBufferData302_SOBEL_5X5_08U, 32, gScenarioKernelData302_SOBEL_5X5_08U, 4},
{12, 20, 1824, 0, 1, gScenarioBufferData303_SOBEL_5X5_08U, 32, gScenarioKernelData303_SOBEL_5X5_08U, 4},
{14, 20, 2072, 0, 1, gScenarioBufferData304_SOBEL_5X5_08U, 32, gScenarioKernelData304_SOBEL_5X5_08U, 4},
{16, 20, 2320, 0, 1, gScenarioBufferData305_SOBEL_5X5_08U, 32, gScenarioKernelData305_SOBEL_5X5_08U, 4},
{18, 20, 2568, 0, 1, gScenarioBufferData306_SOBEL_5X5_08U, 32, gScenarioKernelData306_SOBEL_5X5_08U, 4},
{20, 20, 2816, 0, 1, gScenarioBufferData307_SOBEL_5X5_08U, 32, gScenarioKernelData307_SOBEL_5X5_08U, 4},
{22, 20, 3064, 0, 1, gScenarioBufferData308_SOBEL_5X5_08U, 32, gScenarioKernelData308_SOBEL_5X5_08U, 4},
{24, 20, 3312, 0, 1, gScenarioBufferData309_SOBEL_5X5_08U, 32, gScenarioKernelData309_SOBEL_5X5_08U, 4},
{26, 20, 3560, 0, 1, gScenarioBufferData310_SOBEL_5X5_08U, 32, gScenarioKernelData310_SOBEL_5X5_08U, 4},
{28, 20, 3808, 0, 1, gScenarioBufferData311_SOBEL_5X5_08U, 32, gScenarioKernelData311_SOBEL_5X5_08U, 4},
{2, 22, 640, 0, 1, gScenarioBufferData312_SOBEL_5X5_08U, 32, gScenarioKernelData312_SOBEL_5X5_08U, 4},
{4, 22, 912, 0, 1, gScenarioBufferData313_SOBEL_5X5_08U, 32, gScenarioKernelData313_SOBEL_5X5_08U, 4},
{6, 22, 1184, 0, 1, gScenarioBufferData314_SOBEL_5X5_08U, 32, gScenarioKernelData314_SOBEL_5X5_08U, 4},
{8, 22, 1456, 0, 1, gScenarioBufferData315_SOBEL_5X5_08U, 32, gScenarioKernelData315_SOBEL_5X5_08U, 4},
{10, 22, 1728, 0, 1, gScenarioBufferData316_SOBEL_5X5_08U, 32, gScenarioKernelData316_SOBEL_5X5_08U, 4},
{12, 22, 2000, 0, 1, gScenarioBufferData317_SOBEL_5X5_08U, 32, gScenarioKernelData317_SOBEL_5X5_08U, 4},
{14, 22, 2272, 0, 1, gScenarioBufferData318_SOBEL_5X5_08U, 32, gScenarioKernelData318_SOBEL_5X5_08U, 4},
{16, 22, 2544, 0, 1, gScenarioBufferData319_SOBEL_5X5_08U, 32, gScenarioKernelData319_SOBEL_5X5_08U, 4},
{18, 22, 2816, 0, 1, gScenarioBufferData320_SOBEL_5X5_08U, 32, gScenarioKernelData320_SOBEL_5X5_08U, 4},
{20, 22, 3088, 0, 1, gScenarioBufferData321_SOBEL_5X5_08U, 32, gScenarioKernelData321_SOBEL_5X5_08U, 4},
{22, 22, 3360, 0, 1, gScenarioBufferData322_SOBEL_5X5_08U, 32, gScenarioKernelData322_SOBEL_5X5_08U, 4},
{24, 22, 3632, 0, 1, gScenarioBufferData323_SOBEL_5X5_08U, 32, gScenarioKernelData323_SOBEL_5X5_08U, 4},
{2, 24, 696, 0, 1, gScenarioBufferData324_SOBEL_5X5_08U, 32, gScenarioKernelData324_SOBEL_5X5_08U, 4},
{4, 24, 992, 0, 1, gScenarioBufferData325_SOBEL_5X5_08U, 32, gScenarioKernelData325_SOBEL_5X5_08U, 4},
{6, 24, 1288, 0, 1, gScenarioBufferData326_SOBEL_5X5_08U, 32, gScenarioKernelData326_SOBEL_5X5_08U, 4},
{8, 24, 1584, 0, 1, gScenarioBufferData327_SOBEL_5X5_08U, 32, gScenarioKernelData327_SOBEL_5X5_08U, 4},
{10, 24, 1880, 0, 1, gScenarioBufferData328_SOBEL_5X5_08U, 32, gScenarioKernelData328_SOBEL_5X5_08U, 4},
{12, 24, 2176, 0, 1, gScenarioBufferData329_SOBEL_5X5_08U, 32, gScenarioKernelData329_SOBEL_5X5_08U, 4},
{14, 24, 2472, 0, 1, gScenarioBufferData330_SOBEL_5X5_08U, 32, gScenarioKernelData330_SOBEL_5X5_08U, 4},
{16, 24, 2768, 0, 1, gScenarioBufferData331_SOBEL_5X5_08U, 32, gScenarioKernelData331_SOBEL_5X5_08U, 4},
{18, 24, 3064, 0, 1, gScenarioBufferData332_SOBEL_5X5_08U, 32, gScenarioKernelData332_SOBEL_5X5_08U, 4},
{20, 24, 3360, 0, 1, gScenarioBufferData333_SOBEL_5X5_08U, 32, gScenarioKernelData333_SOBEL_5X5_08U, 4},
{22, 24, 3656, 0, 1, gScenarioBufferData334_SOBEL_5X5_08U, 32, gScenarioKernelData334_SOBEL_5X5_08U, 4},
{2, 26, 752, 0, 1, gScenarioBufferData335_SOBEL_5X5_08U, 32, gScenarioKernelData335_SOBEL_5X5_08U, 4},
{4, 26, 1072, 0, 1, gScenarioBufferData336_SOBEL_5X5_08U, 32, gScenarioKernelData336_SOBEL_5X5_08U, 4},
{6, 26, 1392, 0, 1, gScenarioBufferData337_SOBEL_5X5_08U, 32, gScenarioKernelData337_SOBEL_5X5_08U, 4},
{8, 26, 1712, 0, 1, gScenarioBufferData338_SOBEL_5X5_08U, 32, gScenarioKernelData338_SOBEL_5X5_08U, 4},
{10, 26, 2032, 0, 1, gScenarioBufferData339_SOBEL_5X5_08U, 32, gScenarioKernelData339_SOBEL_5X5_08U, 4},
{12, 26, 2352, 0, 1, gScenarioBufferData340_SOBEL_5X5_08U, 32, gScenarioKernelData340_SOBEL_5X5_08U, 4},
{14, 26, 2672, 0, 1, gScenarioBufferData341_SOBEL_5X5_08U, 32, gScenarioKernelData341_SOBEL_5X5_08U, 4},
{16, 26, 2992, 0, 1, gScenarioBufferData342_SOBEL_5X5_08U, 32, gScenarioKernelData342_SOBEL_5X5_08U, 4},
{18, 26, 3312, 0, 1, gScenarioBufferData343_SOBEL_5X5_08U, 32, gScenarioKernelData343_SOBEL_5X5_08U, 4},
{20, 26, 3632, 0, 1, gScenarioBufferData344_SOBEL_5X5_08U, 32, gScenarioKernelData344_SOBEL_5X5_08U, 4},
{2, 28, 808, 0, 1, gScenarioBufferData345_SOBEL_5X5_08U, 32, gScenarioKernelData345_SOBEL_5X5_08U, 4},
{4, 28, 1152, 0, 1, gScenarioBufferData346_SOBEL_5X5_08U, 32, gScenarioKernelData346_SOBEL_5X5_08U, 4},
{6, 28, 1496, 0, 1, gScenarioBufferData347_SOBEL_5X5_08U, 32, gScenarioKernelData347_SOBEL_5X5_08U, 4},
{8, 28, 1840, 0, 1, gScenarioBufferData348_SOBEL_5X5_08U, 32, gScenarioKernelData348_SOBEL_5X5_08U, 4},
{10, 28, 2184, 0, 1, gScenarioBufferData349_SOBEL_5X5_08U, 32, gScenarioKernelData349_SOBEL_5X5_08U, 4},
{12, 28, 2528, 0, 1, gScenarioBufferData350_SOBEL_5X5_08U, 32, gScenarioKernelData350_SOBEL_5X5_08U, 4},
{14, 28, 2872, 0, 1, gScenarioBufferData351_SOBEL_5X5_08U, 32, gScenarioKernelData351_SOBEL_5X5_08U, 4},
{16, 28, 3216, 0, 1, gScenarioBufferData352_SOBEL_5X5_08U, 32, gScenarioKernelData352_SOBEL_5X5_08U, 4},
{18, 28, 3560, 0, 1, gScenarioBufferData353_SOBEL_5X5_08U, 32, gScenarioKernelData353_SOBEL_5X5_08U, 4},
{2, 30, 864, 0, 1, gScenarioBufferData354_SOBEL_5X5_08U, 32, gScenarioKernelData354_SOBEL_5X5_08U, 4},
{4, 30, 1232, 0, 1, gScenarioBufferData355_SOBEL_5X5_08U, 32, gScenarioKernelData355_SOBEL_5X5_08U, 4},
{6, 30, 1600, 0, 1, gScenarioBufferData356_SOBEL_5X5_08U, 32, gScenarioKernelData356_SOBEL_5X5_08U, 4},
{8, 30, 1968, 0, 1, gScenarioBufferData357_SOBEL_5X5_08U, 32, gScenarioKernelData357_SOBEL_5X5_08U, 4},
{10, 30, 2336, 0, 1, gScenarioBufferData358_SOBEL_5X5_08U, 32, gScenarioKernelData358_SOBEL_5X5_08U, 4},
{12, 30, 2704, 0, 1, gScenarioBufferData359_SOBEL_5X5_08U, 32, gScenarioKernelData359_SOBEL_5X5_08U, 4},
{14, 30, 3072, 0, 1, gScenarioBufferData360_SOBEL_5X5_08U, 32, gScenarioKernelData360_SOBEL_5X5_08U, 4},
{16, 30, 3440, 0, 1, gScenarioBufferData361_SOBEL_5X5_08U, 32, gScenarioKernelData361_SOBEL_5X5_08U, 4},
{18, 30, 3808, 0, 1, gScenarioBufferData362_SOBEL_5X5_08U, 32, gScenarioKernelData362_SOBEL_5X5_08U, 4},
{2, 32, 920, 0, 1, gScenarioBufferData363_SOBEL_5X5_08U, 32, gScenarioKernelData363_SOBEL_5X5_08U, 4},
{4, 32, 1312, 0, 1, gScenarioBufferData364_SOBEL_5X5_08U, 32, gScenarioKernelData364_SOBEL_5X5_08U, 4},
{6, 32, 1704, 0, 1, gScenarioBufferData365_SOBEL_5X5_08U, 32, gScenarioKernelData365_SOBEL_5X5_08U, 4},
{8, 32, 2096, 0, 1, gScenarioBufferData366_SOBEL_5X5_08U, 32, gScenarioKernelData366_SOBEL_5X5_08U, 4},
{10, 32, 2488, 0, 1, gScenarioBufferData367_SOBEL_5X5_08U, 32, gScenarioKernelData367_SOBEL_5X5_08U, 4},
{12, 32, 2880, 0, 1, gScenarioBufferData368_SOBEL_5X5_08U, 32, gScenarioKernelData368_SOBEL_5X5_08U, 4},
{14, 32, 3272, 0, 1, gScenarioBufferData369_SOBEL_5X5_08U, 32, gScenarioKernelData369_SOBEL_5X5_08U, 4},
{16, 32, 3664, 0, 1, gScenarioBufferData370_SOBEL_5X5_08U, 32, gScenarioKernelData370_SOBEL_5X5_08U, 4}
};

static acf_scenario_list gScenarioList_SOBEL_5X5_08U = {
371, //number of scenarios
gScenarioArray_SOBEL_5X5_08U};
//**************************************************************

class SOBEL_5X5_08U : public ACF_Process_APU
{

public:
   SOBEL_5X5_08U(int32_t apex_id = 0) : ACF_Process_APU(apex_id)
   {} 

   int32_t Initialize()
   {
      int32_t lRetVal = 0;

      if (!Initialized()) //initialization steps that only need to occur once
      {
         SetProcessIdentifier("SOBEL_5X5_08U");
         SetApuLoadInfo(SOBEL_5X5_08U_LOAD_SEGMENTS,
                        SOBEL_5X5_08U_LOAD_PMEM, SOBEL_5X5_08U_LOAD_PMEM_SIZE,
                        SOBEL_5X5_08U_LOAD_DMEM, SOBEL_5X5_08U_LOAD_DMEM_SIZE,
                        0, 0); //assuming _LOAD_CMEM does not exist

         lRetVal = NonParametricInitialization();
         if (lRetVal != 0) return lRetVal;

         FlagSpatialDep();

         //***NOTE: the order in which the following ports are added is meaningful; do not change!

         AddPort("INPUT_0", icp::DATATYPE_08U, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 0);
         AddPort("OUTPUT_0", icp::DATATYPE_08U, 1, 1, 2, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0);

         CfgScenarios(&gScenarioList_SOBEL_5X5_08U);

         FlagAsInitialized();
      }

      lRetVal = SelectApuConfiguration(mApuCfg, mApexId); //by default mApuCfg = ACF_APU_CFG__APEX0_DEFAULT and mApexId = 0

      return lRetVal;
   }
};

#endif //_ACF_PROCESS_APU_SOBEL_5X5_08U
