cmake_minimum_required(VERSION 2.8)

option(USE_STATIC_KG68IOT_LED7SEG_LIBRARY "Build json_jsmn static library." OFF)
option(USE_OBJECT_KG68IOT_LED7SEG_LIBRARY "Build json_jsmn object library." ON)

if(USE_OBJECT_KG68IOT_LED7SEG_LIBRARY)
    add_library(kg68iot-led7seg-object OBJECT led7seg.c)
endif(USE_OBJECT_KG68IOT_LED7SEG_LIBRARY)

if(USE_STATIC_KG68IOT_LED7SEG_LIBRARY)
    add_library(kg68iot-led7seg-static STATIC led7seg.c)

    target_include_directories(kg68iot-led7seg-static PUBLIC ${CMAKE_CURRENT_LIST_DIR})
endif(USE_STATIC_KG68IOT_LED7SEG_LIBRARY)
