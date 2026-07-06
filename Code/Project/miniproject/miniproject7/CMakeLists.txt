cmake_minimum_required(VERSION 3.10)

project(TrafficControlSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES 
    "SRC/*.cpp"
    "SRC/*.h"
)

add_executable(TrafficApp ${SOURCES})

target_include_directories(TrafficApp PRIVATE SRC)