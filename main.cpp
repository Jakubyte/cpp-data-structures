#include "headers/LinkedList.h"
#include <iostream>

int main()
{
    Jakubyte::LinkedList<int> list(420);
    std::cout << list.contains(420) << std::endl;
    std::cout << list.contains(421) << std::endl;

    return 0;
}