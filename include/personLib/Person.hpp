
#ifndef EXERCISE1_PERSON_HPP
#define EXERCISE1_PERSON_HPP

#include <string>

namespace exercise1 {

    class Person {

    public:
        Person(const std::string& firstName, const std::string& lastName)
            : firstName_(firstName), lastName_(lastName) { // note use of member initializer list

            // here we could verify the input data and throw an exception on bad data (empty string etc.),
            // or alternatively set a 'valid' flag_ for users to check after construction etc..

        }

        [[nodiscard]] std::string getFirstName() const {
            return firstName_;
        }

        [[nodiscard]] std::string getLastName() const {
            return lastName_;
        }

        [[nodiscard]] std::string getFullName() const {
            return firstName_ + " " + lastName_;
        }

        // We could add setters in the future if we see that we need to.
        // It's easier to add stuff than to remove stuff.

    private:
        std::string firstName_;
        std::string lastName_;
    };

}// namespace exercise1

#endif// EXERCISE1_PERSON_HPP
