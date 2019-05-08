add_library(lab5_lib STATIC "")
target_sources(lab5_lib PRIVATE "strlen" "find" "delete" "strcpy" "strcat" "insert")
target_include_directories(lab5_lib PUBLIC "../includes")