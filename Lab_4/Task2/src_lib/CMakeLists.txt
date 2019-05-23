add_library (Task2_lib "")
target_sources(Task2_lib PRIVATE "writeArray.c" "readArray.c" "sort.c" "sortStackArray.c")
target_include_directories(Task2_lib PUBLIC "../includes")