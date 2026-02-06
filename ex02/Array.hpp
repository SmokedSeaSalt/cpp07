#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <string>

template <typename T> class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        T& operator[](unsigned int i);

        class OutOfBounds : public std::exception
        {
            public:
                OutOfBounds(unsigned int i);
                const char* what() const noexcept;

            private:
                unsigned int index_;
                std::string message_;
        };

        unsigned int size() const;

    private:
        T*           array_;
        unsigned int size_;
};

#include "Array.tpp"

#endif // ARRAY_HPP