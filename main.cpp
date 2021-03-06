#include <cstdlib>
#include <iostream>

#include "Context.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"

using namespace std;

int main(int argc, char** argv)
{

    const Context* context;
    const int a = 3;
    const int b = 2;

    context = new Context(new Add());
    const int resultA = context->executeStrategy(a, b);

    context->~Context();

    context = new Context(new Subtract());
    const int resultB = context->executeStrategy(a, b);

    context->~Context();

    context = new Context(new Multiply());
    const int resultC = context->executeStrategy(a, b);

    context->~Context();

    cout << "Result A: " << resultA << endl;
    cout << "Result B: " << resultB << endl;
    cout << "Result C: " << resultC << endl;

    return 0;
}

