
#ifndef EXERCISE1_GREET_HPP
#define EXERCISE1_GREET_HPP

// notice how we have "hidden" the use of <iostream>

namespace exercise1 { // I've decided to use this namespace in all the project's headers.

    // forward declare and include header in .cpp
    // Alternatively just include it here.
    // I'm just showing that it's possible.
    class Person;

    void greet(const Person& person);

}

#endif//EXERCISE1_GREET_HPP
