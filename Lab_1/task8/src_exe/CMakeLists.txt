# CMakeList.txt: проект CMake для task8; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.

add_executable (task8 "")

target_sources(task8 PRIVATE "../src_exe/task7_main.c")

target_link_libraries(task8 task8_lib)

target_include_directories(task8 PRIVATE "../includes")


# TODO: Добавьте тесты и целевые объекты, если это необходимо.