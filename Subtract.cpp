#include "Subtract.h"
#include <iostream>

Subtract::Subtract()
{
}

int Subtract::execute(const int a, const int b) const
{
    std::cout << "Called Subtract's execute()" << std::endl;
    return a - b;
}

Subtract::~Subtract()
{
}

