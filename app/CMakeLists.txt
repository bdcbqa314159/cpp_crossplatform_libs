project(app)

set(includes ./ ../my_library/ ${dlloader_include_dir} ${dlloader_include_dir_platform})

add_executable(my_test my_test.cpp)
target_include_directories(my_test PUBLIC ${includes})
target_link_libraries(my_test my_library)

add_executable(another_test another_test.cpp)
target_include_directories(another_test PUBLIC ${includes})
target_link_libraries(another_test my_library)