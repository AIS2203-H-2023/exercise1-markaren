
#ifndef EXERCISE1_GREET_HPP
#define EXERCISE1_GREET_HPP

#include "personLib/Person.hpp"

#include <iostream>

namespace exercise1 { // I've decided to use this namespace in all the project's headers.

    // free functions with implementations should be marked 'inline'
    inline void greet(const Person& person) { // we don't mutate, so const.

        std::cout << "Hello, " << person.getFullName() << "!" << std::endl;
    }

}

#endif//EXERCISE1_GREET_HPP
