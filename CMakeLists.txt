cmake_minimum_required(VERSION 3.28)
project(Kmbox)

set(CMAKE_CXX_STANDARD 17)

add_library(Kmbox STATIC src/library.cpp
        src/my_enc.h
        src/kmboxNet.h
        src/HidTable.h
        src/my_enc.cpp
        src/kmboxNet.cpp)

target_include_directories(Kmbox
        PUBLIC
        ${PROJECT_SOURCE_DIR}/src
)


add_executable(Kmbox_test test/test.cpp)

target_link_libraries(Kmbox_test
        PRIVATE
        Kmbox
)

if(WIN32)
    target_link_libraries(Kmbox_test PRIVATE ws2_32)
endif()
