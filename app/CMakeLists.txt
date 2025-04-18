project(app)

set(includes ./ ../libraries/ ../libraries/common/ ../libraries/my_static_lib/ ../libraries/my_dynamic_lib/ ${dlloader_include_dir} ${dlloader_include_dir_platform})

add_executable(my_test my_test.cpp)
target_include_directories(my_test PUBLIC ${includes})
target_link_libraries(my_test my_static_library)

# add_executable(another_test another_test.cpp)
# target_include_directories(another_test PUBLIC ${includes})
# target_link_libraries(another_test my_library)