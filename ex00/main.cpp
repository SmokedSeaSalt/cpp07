#include "whatever.hpp"
#include <iostream>

int main(void)
{
    int a = 1337;
    int b = 69;
    std::cout << "a: " << a << ". b: " << b << ".\n";
    std::cout << "min " << min<int>(a, b) << ". max: " << max<int>(a, b) << ".\n";
    swap<int>(a, b);
    std::cout << "a: " << a << ". b: " << b << ".\n";
    std::cout << "min " << min<int>(a, b) << ". max: " << max<int>(a, b) << ".\n";

    float c = 3.14;
    float d = 1.001;
    std::cout << "c: " << c << ". d: " << d << ".\n";
    std::cout << "min " << min<float>(c, d) << ". max: " << max<float>(c, d) << ".\n";
    swap<float>(c, d);
    std::cout << "c: " << c << ". d: " << d << ".\n";
    std::cout << "min " << min<float>(c, d) << ". max: " << max<float>(c, d) << ".\n";
}