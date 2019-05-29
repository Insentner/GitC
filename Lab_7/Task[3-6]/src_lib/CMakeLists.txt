add_library(lab7_3_lib STATIC "")
target_sources(lab7_3_lib PRIVATE "strlen.c" "find.c" "delete.c" "strcpy.c" "strcat.c" "insert.c")
target_include_directories(lab7_3_lib PUBLIC "../includes")