project(ProbVote)
cmake_minimum_required(VERSION 3.10)

include_directories(inc)
add_subdirectory(src)
add_subdirectory(lib)

add_dependencies(ProbVote admin viewer vip vote)
