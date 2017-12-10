cmake_minimum_required(VERSION 3.8)
project(OMPL)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
#add_executable(OMPL ${SOURCE_FILES})

add_executable(OMPL RRTstar.cpp)
target_link_libraries(OMPL -L/usr/local/include/ompl)
target_link_libraries(OMPL -lompl)
