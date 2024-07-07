cmake_minimum_required(VERSION 3.13)

set(PROJECTNAME uart_blink)

set(FREE_RTOS_KERNEL_PATH ${CMAKE_CURRENT_SOURCE_DIR}/FreeRTOS_Kernel)

include(pico_sdk_import.cmake)
include(FreeRTOS_Kernel_import.cmake)

project(${PROJECTNAME})

pico_sdk_init()

add_subdirectory(src)
