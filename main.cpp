#include "headers/Lists/LinkedList.h"
#include <iostream>

template <typename T>
void printContains(Jakubyte::List<T> *l, T v)
{
    std::cout << l->contains(v) << std::endl;
}

int main()
{
    Jakubyte::List<int> *list = new Jakubyte::LinkedList<int>();
    list->add(420);
    list->add(421);

    printContains(list, 420);
    printContains(list, 240);

    return 0;
}