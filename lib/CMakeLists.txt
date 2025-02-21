add_library(strUtils STATIC
    strUtils.cpp
)

target_include_directories(strUtils PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)