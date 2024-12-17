cmake_minimum_required(VERSION 3.28)
project(Kmbox)

set(CMAKE_CXX_STANDARD 17)

add_library(Kmbox STATIC src/kmbox.cpp
        src/kmboxNet/my_enc.h
        src/kmboxNet/kmboxNet.h
        src/kmboxNet/HidTable.h
        src/kmboxNet/my_enc.cpp
        src/kmboxNet/kmboxNet.cpp)

target_include_directories(Kmbox
        PUBLIC
        ${PROJECT_SOURCE_DIR}/src
)


add_executable(Kmbox_example example/example.cpp)

target_link_libraries(Kmbox_example
        PRIVATE
        Kmbox
)

if(WIN32)
    target_link_libraries(Kmbox_example PRIVATE ws2_32)
endif()
