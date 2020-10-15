# CMakeList.txt : CMake project for linked_lists, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (linked_list_tests "../linked_lists/linked_list.cpp" "../utils/ll_utils.cpp" "linked_list_tests.cpp")
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT linked_list_tests)
