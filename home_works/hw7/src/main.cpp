#include "list.hpp"
#include "vector.hpp"

#include <iostream>

int main(int, char**) {
    std::cout << "Hello from Global Main" << std::endl;

    std::cout << "List Testing" << std::endl;

    const size_t count = 10;

    otus::List<size_t> list;
    for (size_t i = 0; i < count; ++i) {
        list.push_back(i);
        list.push_front(i);
    }

    for (size_t i = 0; i < count * 2; ++i) {
        std::cout << list.front() << ' ';
        list.pop_front();
    }
    std::cout << std::endl;

    std::cout << "Vector Testing" << std::endl;

    otus::Vector<size_t> vector;
    size_t count = 10;

    for (size_t i = 0; i < count; ++i) {
        vector.push_back(i);
    }

    for (size_t i = 0; i < count; ++i) {
        std::cout << vector[i] << ' ';
    }

     return 0;
}