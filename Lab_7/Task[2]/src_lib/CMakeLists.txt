add_library (lab7_2_lib STATIC "")
target_sources(lab7_2_lib PRIVATE "writeArray.c" "readArray.c" "sort.c" "sortHeapArray.c")
target_include_directories(lab7_2_lib PUBLIC "../includes")