cmake_minimum_required(VERSION 3.5.0)
project(lab6 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(lab6 main.cpp)
add_library(rec rectangle.h)

target_link_libraries(lab6 rec)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
