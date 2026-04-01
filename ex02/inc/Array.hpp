#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <stdexcept>
# include <iostream>

template<typename T>
class Array
{
    private:
        T *_array;
        size_t _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        ~Array();

        Array &operator=(const Array &other);
        T &operator[](size_t index);
        const T &operator[](size_t index) const;

        size_t size() const;
};

# include "Array.tpp"
#endif