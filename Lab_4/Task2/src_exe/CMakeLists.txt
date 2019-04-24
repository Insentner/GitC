cmake_minimum_required (VERSION 3.8)

add_executable (task2 "main.c")
target_link_libraries(task2 PRIVATE task2_lib)