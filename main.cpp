
#include <vector>

// notice no "include/" part in the path, because we have configured our CMake target properties
#include "personLib/Greet.hpp"

// 'using namespace' in .cpp files are fine, but avoid 'using namespace std;'
using namespace exercise1;

std::vector<Person> createPersons() {

    // Sometimes auto-format formats in a way we do not like.
    // Se below how we can "pause" autoformatting

    // clang-format off
    std::vector<Person> persons{
            {"Per", "Nilsen"},
            {"Kim", "Fredriksen"},
            {"Tuva", "Pettersen"}
    };
    // clang-format on

    return persons;
}

int main() {

    // Cleaner to create the persons in a function
    auto persons = createPersons();

    for (const auto& p : persons) {
        // not planning on mutating `p`, so const
        greet(p);
    }
}
