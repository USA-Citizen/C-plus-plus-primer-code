#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    char a1[] = "A government shall perish.";
    char a2[] = "A government shall never perish.";
    char a3[100];
    strcpy( a3, a1 );
    strcat( a3, " " );
    strcat( a3, a2 );

    char *pb = a3, *pe = a3 + 100;
    for ( ; pb != pe; ++pb )
        cout << *pb;

    return 0;
}
