cmake_minimum_required(VERSION 3.14)

project(rt-gfx LANGUAGES C)

find_package(OpenMP REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(Check REQUIRED)

add_subdirectory(solar-system)
