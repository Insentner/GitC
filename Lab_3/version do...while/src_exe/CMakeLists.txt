# CMakeList.txt: проект CMake для version for; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab3_do...while "")

target_sources (lab3_do...while PRIVATE "../src_exe/main.c" "../src_exe/summ.c" "../src_exe/summ2.c" "../src_exe/print.c" "../src_exe/findFirstElement.c" "../src_exe/findFirstNegativeElement.c")

target_include_directories(lab3_do...while PRIVATE "../includes")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.