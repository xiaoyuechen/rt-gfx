add_library(
  solar-system
  src/solar_system.c
)

target_include_directories(solar-system PUBLIC include)
target_link_libraries(
  solar-system
  PRIVATE OpenMP::OpenMP_C
  PRIVATE OpenGL::GL
  PRIVATE glfw
)

add_executable(solar-system-main src/main.c)
target_link_libraries(solar-system-main PRIVATE solar-system)

add_subdirectory(tests)
