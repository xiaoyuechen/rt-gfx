cmake_minimum_required(VERSION 3.14)

project(gl LANGUAGES C)

add_executable(gl src/main.c)

find_package(OpenMP REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIRED)

target_link_libraries(gl PRIVATE OpenMP::OpenMP_C OpenGL::GL glfw)
