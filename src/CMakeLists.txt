
set(sources
        "personLib/Greet.cpp"
        "personLib/Person.cpp"
)

add_library(personLib ${sources})
# Now, tell the compiler where to look for additional include folders
# With the below, we can do #include "personLib/Greet.hpp"
# PUBLIC, because other targets will use this target and will need the headers themselves (main target).
target_include_directories(personLib PUBLIC "${CMAKE_SOURCE_DIR}/include")
