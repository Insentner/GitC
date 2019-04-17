cmake_minimum_required (VERSION 3.8)

add_executable (task8 "")

target_sources(task8 PRIVATE "../../task7/src_exe/task7_main.c")

target_link_libraries(task8 task8_lib)

target_include_directories(task8 PRIVATE "../../task7/includes")