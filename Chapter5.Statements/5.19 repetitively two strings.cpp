#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    do
    {
        if (s1 < s2)
        {
            cout << s1 << " is less than " << s2 << endl;
        }
        else
        {
            cout << s2 << " is less than " << s1 << endl;
        }
    }
    while (cin >> s1 >> s2);

    return 0;
}
