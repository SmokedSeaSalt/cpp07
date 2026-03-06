#include "whatever.hpp"
#include "terminalOutput.hpp"
#include <iostream>

int main(void)
{
    // subject test
    std::cout << C_BLUE << "Subject test" << C_END << std::endl;
    {
        int a = 2;
        int b = 3;
        ::swap(a, b);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
        std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    }

    // extra test
    std::cout << C_BLUE << "Extra test" << C_END << std::endl;
    {
        int a = 1337;
        int b = 69;
        std::cout << "a: " << a << ". b: " << b << ".\n";
        std::cout << "min " << min<int>(a, b) << ". max: " << max<int>(a, b) << ".\n";
        swap(a, b);
        std::cout << "a: " << a << ". b: " << b << ".\n";
        std::cout << "min " << min<int>(a, b) << ". max: " << max<int>(a, b) << ".\n";

        float c = 3.14;
        float d = 1.001;
        std::cout << "c: " << c << ". d: " << d << ".\n";
        std::cout << "min " << min<float>(c, d) << ". max: " << max<float>(c, d) << ".\n";
        swap(c, d);
        std::cout << "c: " << c << ". d: " << d << ".\n";
        std::cout << "min " << min<float>(c, d) << ". max: " << max<float>(c, d) << ".\n";
    }
}