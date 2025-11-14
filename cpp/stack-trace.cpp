/*
#include <boost/stacktrace.hpp>
#include <iostream>

void foo() {
    std::cout << boost::stacktrace::stacktrace();
}

int main() {
    foo();
    std::cout << "-----------------------------------------" << std::endl;
    foo();
    return 0;
}
*/

#include <stacktrace>
#include <iostream>

void foo() {
    auto st = std::stacktrace::current();   // capture stack

    std::cout << "Stacktrace:\n";
    for (auto const& entry : st) {
        std::cout << entry << '\n';  // Implementation-defined, often shows function + location
    }
}

int main() {
    foo();
}
