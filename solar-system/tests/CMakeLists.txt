add_executable(solar-system-tests
  test.c)

target_link_libraries(solar-system-tests
  PRIVATE check
  PRIVATE solar-system)
