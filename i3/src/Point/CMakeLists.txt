add_library(Point Point.cpp)

target_include_directories(Point PUBLIC include ../abstract)
target_include_directories(Point PUBLIC include ../Vector)