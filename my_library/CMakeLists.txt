project(my_library)

set(includes includes/)
set(sources src/common_functions.cpp
            src/functions_api.cpp

)

add_library(${PROJECT_NAME} ${sources})
target_include_directories(${PROJECT_NAME} PUBLIC ${includes})