#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("shitshit");
    int num = s.size(), i = 0;
    while ( i < num )
    {
        s[i] = 'X';
        ++i;
    }
    cout << s;
    return 0;
}
