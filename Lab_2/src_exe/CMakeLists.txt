cmake_minimum_required (VERSION 3.8)

add_executable (lab2 "")

target_sources(lab2 PRIVATE "../src_exe/main.c")

target_link_libraries(lab2 lab2_lib)