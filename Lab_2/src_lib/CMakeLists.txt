# CMakeList.txt: проект CMake для task1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
# add_executable (lab2 "main.c" "task2_f.c" "task1_ar.c")
add_library(lab2_lib STATIC "")

target_include_directories(lab2_lib PRIVATE "../includes/head.h")

target_sources(lab2_lib PRIVATE "../src_lib/task2_f.c" "../src_lib/task1_ar.c")