# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

add_library(lab3_do...while_lib STATIC "")

target_include_directories(lab3_do...while_lib PRIVATE "../includes")

target_sources(lab3_do...while_lib PRIVATE "../src_lib/summ.c" "../src_lib/summ2.c" "../src_lib/print.c" "../src_lib/findFirstElement.c" "../src_lib/findFirstNegativeElement.c" "../src_lib/func.c")