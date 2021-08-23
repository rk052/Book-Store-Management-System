#include <iostream>
#include "Autobook.h"
#include "NonfictionTypeBook.h"

using std::cout;
using std::endl;

namespace example
{
    NonfictionTypeBook::NonfictionTypeBook() : Autobook()
    {
        cout << " ***You are choosing a non-fictional book ***" << endl;
    }
}