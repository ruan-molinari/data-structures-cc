cmake_minimum_required (VERSION 3.25)
project(DataStructures LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(src)
##add_subdirectory(include)
add_subdirectory(tests)

target_include_directories(data_structures PUBLIC include)
