cmake_minimum_required(VERSION 3.22.2)
project(algSample)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS "-Wall -std=c++11")

aux_source_directory(. DIR_SRCS)
set(INC_DIR /usr/local/include)
set(LINK_DIR  /usr/local/lib)


include_directories(${INC_DIR} ./common /usr/local/include)
add_subdirectory(common)

link_directories(${LINK_DIR})
add_executable(algSample ${DIR_SRCS})
target_link_libraries(algSample common)