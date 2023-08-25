
#include "personLib/Person.hpp"

using namespace exercise1;

Person::Person(const std::string& firstName, const std::string& lastName)
        : firstName_(firstName), lastName_(lastName) { // note use of member initializer list

    // here we could verify the input data and throw an exception on bad data (empty string etc.),
    // or alternatively set a 'valid' flag_ for users to check after construction etc..

}

std::string Person::getFirstName() const {
    return firstName_;
}

std::string Person::getLastName() const {
    return lastName_;
}

std::string Person::getFullName() const {
    return firstName_ + " " + lastName_;
}
