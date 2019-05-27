add_library(lab7_1_lib STATIC "")
target_include_directories(lab7_1_lib PUBLIC "../includes")
target_sources(lab7_1_lib PRIVATE "incrementHeapVariable.c")