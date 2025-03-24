cmake_minimum_required(VERSION 3.30)
project(GameOfLife)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB UTILITIES_MODULES "Utilities/*.ixx")
file(GLOB GAME_STATE_MODULES "GameState/*.ixx")

add_executable(GameOfLife main.cpp
        ${GAME_STATE_MODULES}
        ${UTILITIES_MODULES})