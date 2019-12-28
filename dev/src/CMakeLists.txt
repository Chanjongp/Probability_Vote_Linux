add_executable(ProbVote main.cpp)

target_link_libraries(ProbVote admin viewer vip vote)
install(TARGETS     ProbVote
RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../bin
)