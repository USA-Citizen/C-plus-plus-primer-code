#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#include "factorial.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace fact;

int fact::factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int d = n - 1;
        int m = fact::factorial(d);
        return n * m;
    }
}
