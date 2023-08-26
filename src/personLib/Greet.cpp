
#include "personLib/Greet.hpp"
#include "personLib/Person.hpp"

#include <iostream>

using namespace exercise1;

void exercise1::greet(const Person& person) { // we don't mutate, so const.

    std::cout << "Hello, " << person.getFullName() << "!" << std::endl;
}
