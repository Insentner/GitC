# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("task8")

# Включите подпроекты.
add_subdirectory ("src_lib")

add_subdirectory ("src_exe")