cmake_minimum_required(VERSION 3.0)

project(DegreesOfTwo)
set(DEGREES_OF_TWO_SRC main.cpp DegreesOfTwo.cpp)
set(DEGREES_OF_TWO_HDR DegreesOfTwo.h)
add_executable(${PROJECT_NAME} ${DEGREES_OF_TWO_SRC} ${DEGREES_OF_TWO_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data.dat
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
