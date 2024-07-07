add_executable(${PROJECTNAME} 
    main.c
    uart_blink.c
    gpio.c
)

target_include_directories(${PROJECTNAME} PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}
    "../include"
)

target_link_libraries(${PROJECTNAME}
    pico_stdlib
    FreeRTOS-Kernel-Heap4
)

pico_add_extra_outputs(${PROJECTNAME})
