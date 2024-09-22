#pragma once

#include <vector>
#include <iostream>

namespace otus {

    template<typename T, typename Allocator = std::allocator<T>>
    struct Vector {
        Vector() = default;
        ~Vector() = default;

        std::size_t size() const noexcept {
            return test_vector.size();
        }

        void push_back(const T& value) {
            test_vector.push_back(value);
        }

        void push_middle (const T& value) {
            std::vector<size_t>::iterator it = test_vector.begin();

            std::advance (it,test_vector.size()/2);
            test_vector.insert(it, value);
        }

        void push_front(const T& value) {
            test_vector.insert(test_vector.begin(),value);
        }

        void pop_back() {
            test_vector.pop_back();
        }

        void pop_front() {
            test_vector.erase(test_vector.begin());
        }

        void pop_middle () {
            size_t current_size = test_vector.size();
            test_vector_backup.swap(test_vector);

            std::vector<size_t>::iterator it;
            it = test_vector_backup.begin();

            for (size_t i = 0; i < test_vector_backup.size(); ++i) {
                if (i == current_size/2-1) it++;
                else {
                    test_vector.push_back(*it);
                    it++;
                }
            }
        }

        bool empty() const noexcept {
            return test_vector.empty();
        }

        T& front() {
            return test_vector.front();
        }

        T& back() {
            return test_vector.back();
        }

        T& operator[](const T& index)
        {
            return test_vector[index];
        }


    private:
        std::vector<T, Allocator> test_vector;
        std::vector<T, Allocator> test_vector_backup;
    };
}