cmake_minimum_required(VERSION 3.13)

set(PROJECTNAME uart_blink)

set(SRC_DIR src)

include(pico_sdk_import.cmake)
include(FreeRTOS_Kernel_import.cmake)

project(${PROJECTNAME})

pico_sdk_init()

add_executable(${PROJECTNAME} 
    ${SRC_DIR}/main.c
    ${SRC_DIR}/uart_blink.c
    ${SRC_DIR}/gpio.c
)

target_include_directories(${PROJECTNAME} PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}
    "./include"
)

target_link_libraries(${PROJECTNAME}
    pico_stdlib
    FreeRTOS-Kernel-Heap4
)

pico_add_extra_outputs(${PROJECTNAME})
