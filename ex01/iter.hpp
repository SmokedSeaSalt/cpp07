#ifndef ITER_HPP
#define ITER_HPP

#include <functional>

template <typename T>
void iter(T* address, const unsigned int length, std::function<void (T&)> iterFunction)
{
    for (unsigned int i = 0; i < length; i++)
    {
        iterFunction(*address);
        address++;
    }
}

#endif // ITER_HPP
