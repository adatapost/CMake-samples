cmake_minimum_required(VERSION 3.10)

# project name
project(first-app)

# add library
add_library(num ../src/num.c)

# executable and source code
add_executable(first-app ../src/main.c)

# link the library
target_link_libraries(first-app PUBLIC num)
