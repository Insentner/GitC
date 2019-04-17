cmake_minimum_required (VERSION 3.8)

add_library(lab3_dowhile_lib STATIC "")

target_include_directories(lab3_dowhile_lib PUBLIC "../includes")

target_sources(lab3_dowhile_lib PRIVATE "summ.c" "summ2.c" "print.c" "findFirstElement.c" "findFirstNegativeElement.c" "func.c")