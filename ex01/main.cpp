#include "iter.hpp"
#include <iostream>
#include "terminalOutput.hpp"

template <typename T> void increment(T& value)
{
    value++;
}

template <typename T> void printWithSpace(const T& value)
{
    std::cout << " " << value;
}

int main(void)
{

	std::cout << C_YELLOW << "Test int array\n" << C_END;
    int       intArray[5]      = {0, 1, 2, 3, 4};

    std::cout << "intArray: ";
	iter<int>(intArray, 5, &printWithSpace<int>);
	std::cout << "\n";

	iter<int>(intArray, 5, &increment<int>);

    std::cout << "intArray: ";
	iter<int>(intArray, 5, &printWithSpace<int>);
	std::cout << "\n";

	std::cout << C_YELLOW << "Test const int array\n" << C_END;

    const int constintArray[5] = {0, 1, 2, 3, 4};

	std::cout << "const intArray: ";
	iter<const int>(constintArray, 5, &printWithSpace<const int>);
	std::cout << "\n";


	std::cout << C_YELLOW << "Test float array\n" << C_END;
    float       floatArray[5]      = {0.2, 1.2, 2.2, 3.2, 4.2};

    std::cout << "floatArray: ";
	iter<float>(floatArray, 5, &printWithSpace<float>);
	std::cout << "\n";

	iter<float>(floatArray, 5, &increment<float>);

    std::cout << "floatArray: ";
	iter<float>(floatArray, 5, &printWithSpace<float>);
	std::cout << "\n";

	std::cout << C_YELLOW << "Test const float array\n" << C_END;

    const float constfloatArray[5] = {0.2, 1.2, 2.2, 3.2, 4.2};

	std::cout << "const intArray: ";
	iter<const float>(constfloatArray, 5, &printWithSpace<const int>);
	std::cout << "\n";

}