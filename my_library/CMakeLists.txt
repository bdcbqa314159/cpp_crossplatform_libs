project(my_library)

set(includes includes/)
set(sources )

add_library(${PROJECT_NAME} ${sources})
target_include_directories(${PROJECT_NAME} PUBLIC ${includes})