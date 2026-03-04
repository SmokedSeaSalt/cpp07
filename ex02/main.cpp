#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{

    //create normal int array and Array<int>
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    //test copy constructors and deconstructors
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    //check if [i] index read works
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    //check if [i] write works
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    //try out of bounds index
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete [] mirror;
    return 0;
}