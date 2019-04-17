cmake_minimum_required (VERSION 3.8)

add_library(lab2_lib STATIC "")

target_include_directories(lab2_lib PRIVATE "../includes/head.h")

target_sources(lab2_lib PRIVATE "../src_lib/task2_f.c" "../src_lib/task1_ar.c")