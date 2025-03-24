cmake_minimum_required(VERSION 3.30)
project(GameOfLife)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE MODULES_FILES "Modules/*.ixx")

add_executable(GameOfLife main.cpp
        ${MODULES_FILES})