cmake_minimum_required(VERSION 3.15)
project(exercise1)

# Could be set to 20
set(CMAKE_CXX_STANDARD 17)

# This is a solution to exercise1 using a header-only approach.
# We could take it further by creating a INTERFACE library target for the headers that we link to,
# but I've settled with a target_include_directories in this case.

# Create an executable named 'main', with 'main.cpp' providing the int main() function.
# If I had more .cpp files, I would have added them.
# We could have specified the headers to the command, but that's mostly for the IDE to recognise files created,
# but not yet included anywhere. What's important is to add all the .cpp files we have.
add_executable(main main.cpp)
# Now, tell the compiler where to look for additional include folders
# With the below, we can do #include "personLib/Greet.hpp"
# PRIVATE, because other targets do not use this target.
target_include_directories(main PRIVATE "${CMAKE_SOURCE_DIR}/include")
