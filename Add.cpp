#include "Add.h"
#include <iostream>

Add::Add()
{
}

int Add::execute(const int a, const int b) const
{
    std::cout << "Called Add's execute()" << std::endl;
    return a + b;
}

Add::~Add()
{
}

