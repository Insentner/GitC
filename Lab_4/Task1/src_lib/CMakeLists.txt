cmake_minimum_required (VERSION 3.8)

add_library (task1_lib "func.c")
target_include_directories(task1_lib PUBLIC "../includes")