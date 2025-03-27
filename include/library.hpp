#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <initializer_list>
#include <stdexcept>
#include <algorithm>
#include <cstddef>

namespace template_library {

    template <typename T>
    class Vector {
    public:
        Vector()
            : 

        explicit Vector(size_t count, const T& value = T())
            : 
        {
            
        }

        Vector(std::initializer_list<T> init)
            : 
        {
            
        }

        Vector(const Vector& other)
            : 
        {
    
        }


        Vector& operator=(const Vector& other) {

        }


        ~Vector() {

        }

        T& operator[](size_t index) {

        }

        const T& operator[](size_t index) const {

        }

        T& at(size_t index) {

        }

        const T& at(size_t index) const {
    
        }

        size_t size() const {

        }

        size_t capacity() const {

        }

        bool empty() const {

        }

        void resize(size_t newSize, const T& value = T()) {

        }

        void reserve(size_t newCapacity) {

        }

        void push_back(const T& value) {

        }

        void pop_back() {

        }

        void clear() {
        }

    private:
        T* data_;
        size_t size_;
        size_t capacity_;
    };
} 

#endif 