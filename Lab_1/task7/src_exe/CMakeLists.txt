cmake_minimum_required (VERSION 3.8)

add_executable(task7 "")

target_sources (task7 PRIVATE "../src_exe/task7_main.c")

target_include_directories(task7 PRIVATE "../includes")

target_sources (task7 PRIVATE "../src_exe/task7_func.c")