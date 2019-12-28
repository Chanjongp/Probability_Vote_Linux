add_library(admin STATIC
    admin.cpp
)

add_library(viewer STATIC
    viewer.cpp
)

add_library(vip STATIC
    vip.cpp
)

add_library(vote STATIC
    vote.cpp
)

install(TARGETS admin viewer vip vote
ARCHIVE DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../lib
)

