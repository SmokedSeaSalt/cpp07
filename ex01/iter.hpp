#ifndef ITER_HPP
#define ITER_HPP

#include <functional>

template <typename T, typename Func>
void iter(T* address, const unsigned int length, Func iterFunction)
{
    for (unsigned int i = 0; i < length; i++)
    {
        iterFunction(*address);
        address++;
    }
}

#endif // ITER_HPP
