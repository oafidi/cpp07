#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
    private:
        T *arr;
        unsigned int n;
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array & other);
	    Array& operator=(const Array& other);
        T& operator[](unsigned int i);
        unsigned int size() const;
};

#include "Array.tpp"

#endif