#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int counter = 0;
    string s;
    while (cin >> s)
    {
        for (char c: s)
        {
            if (c == 'a')
                ++counter;
            else if (c == 'e')
                ++counter;
            else if (c == 'i')
                ++counter;
            else if (c == 'o')
                ++counter;
            else if (c == 'u')
                ++counter;
        }
        cout << counter << endl;

    }
    return 0;
}
