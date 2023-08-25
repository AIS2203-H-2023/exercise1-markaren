
#ifndef EXERCISE1_PERSON_HPP
#define EXERCISE1_PERSON_HPP

#include <string>

namespace exercise1 {

    class Person {

    public:
        Person(const std::string& firstName, const std::string& lastName);

        [[nodiscard]] std::string getFirstName() const;

        [[nodiscard]] std::string getLastName() const;

        [[nodiscard]] std::string getFullName() const;

        // We could add setters in the future if we see that we need to.
        // It's easier to add stuff than to remove stuff.

    private:
        std::string firstName_;
        std::string lastName_;
    };

}// namespace exercise1

#endif// EXERCISE1_PERSON_HPP
