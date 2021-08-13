#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    cout << sizeof (short) << endl;
    cout << sizeof (int) << endl;
    cout << sizeof (long) << endl;
    cout << sizeof (long long) << endl << endl;

    cout << sizeof (float) << endl;
    cout << sizeof (double) << endl;
    cout << sizeof (long double) << endl << endl;

    cout << sizeof (char) << endl;
    cout << sizeof (wchar_t) << endl;
    cout << sizeof (char16_t) << endl;
    cout << sizeof (char32_t) << endl << endl;

    cout << sizeof (bool) << endl;
    cout << sizeof (unsigned int) << endl;
    return 0;
}
