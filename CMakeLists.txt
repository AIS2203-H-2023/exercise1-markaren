cmake_minimum_required(VERSION 3.15)
project(exercise1)

# Could be set to 20
set(CMAKE_CXX_STANDARD 17)

# This is a solution to exercise1 using a header-split approach.

# Delegate work to another CMakeLists.txt
add_subdirectory(src)

# Create an executable named 'main', with 'main.cpp' providing the int main() function.
add_executable(main main.cpp)
# Link with the library created
target_link_libraries(main PRIVATE personLib)
