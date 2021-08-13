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

int main()
{
    int x = 6;
    cout << factorial(x) << endl;

    return 0;
}
