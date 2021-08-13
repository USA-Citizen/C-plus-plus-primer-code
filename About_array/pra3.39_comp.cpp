#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s1 = "A government of the capitalists, shall never perish.";
    string s2 = "A government of the shit, shall never shit.";
    if ( s1 > s2 )
    {
        cout << "s1 greater." << endl;
    }
    else
    {
        cout << "s1 not greater." << endl;
    }

    const char ca1[] = "A government of the capitalists, shall never perish.";
    const char ca2[] = "A government of the shit, shall never shit.";
    if ( strcmp( ca1, ca2 )>0 )
    {
        cout << "ca1 greater." << endl;
    }
    else
    {
        cout << "ca1 not greater." << endl;
    }
    return 0;
}
