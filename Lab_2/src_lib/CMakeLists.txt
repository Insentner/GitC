cmake_minimum_required (VERSION 3.8)

add_library(lab2_lib STATIC "")

target_include_directories(lab2_lib PUBLIC "../includes")

target_sources(lab2_lib PRIVATE "task2_f.c" "task1_ar.c")