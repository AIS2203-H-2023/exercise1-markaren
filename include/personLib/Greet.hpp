
#ifndef EXERCISE1_GREET_HPP
#define EXERCISE1_GREET_HPP

#include "personLib/Person.hpp"

#include <iostream>

namespace exercise1 { // I've decided to use this namespace in all the project's headers.

    void greet(const Person& person) { // we don't mutate, so const.

        std::cout << person.getFullName() << std::endl;
    }

}

#endif//EXERCISE1_GREET_HPP
