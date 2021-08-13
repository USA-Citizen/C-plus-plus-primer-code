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
            switch (c)
            {
                case 'a':case 'e':case 'i':case 'o':case 'u':
                case 'A':case 'E':case 'I':case 'O':case 'U':
                    ++counter;
                    break;
                default:
                    break;

            }
        }
        cout << counter << endl;

    }
    return 0;
}
