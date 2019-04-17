# CMakeList.txt: проект CMake для version for; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab3_dowhile "")

target_sources (lab3_dowhile PRIVATE "main.c")

target_link_libraries(lab3_dowhile lab3_dowhile_lib)


add_executable (lab3_while "")

target_sources (lab3_while PRIVATE "main.c")

target_link_libraries(lab3_while lab3_while_lib)


add_executable (lab3_for "")

target_sources (lab3_for PRIVATE "main.c")

target_link_libraries(lab3_for lab3_for_lib)
