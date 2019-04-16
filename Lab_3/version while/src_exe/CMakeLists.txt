# CMakeList.txt: проект CMake для version for; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab3_while "")

target_sources (lab3_while PRIVATE "../src_exe/main.c")

target_link_libraries(lab3_while lab3_while_lib)

#target_include_directories(lab3_while PRIVATE "../includes")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.