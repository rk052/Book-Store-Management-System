#include <iostream>
#include "Autobook.h"
#include "FictionTypeBook.h"

using std::cout;
using std::endl;

namespace example
{
    FictionTypeBook::FictionTypeBook() : Autobook()
    {
        cout << " ***You are choosing a fictional book ***" << endl;
    }
}