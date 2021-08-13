#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int a1[] = {210, 3939, 191, 482};
    int a2[] = {210, 3939, 191, 482, 296};
    int *b1 = a1, *e1 = a1 + 4, *b2 = a2, *e2 = a2 + 4;
    while (1)
    {
        if ( ( b1 == e1 && b2 != e2 ) || ( b2 == e2 && b1 != e1) )
        {
            cout << "a1 != a2" << endl;
            return 0;
        }
        else if ( ( b1 == e1 && b2 == e2 ) )
        {
            if ( *b1 == *b2 )
            {
                cout << "a1 == a2" << endl;
                return 1;
            }
            else
            {
                cout << "a1 != a2" << endl;
                return 0;
            }
        }
        else
        {
            if ( *b1 == *b2 )
            {
                cout << "CONTINUE" << endl;
                ++b1;
                ++b2;
            }
            else
            {
                cout << "a1 != a2" << endl;
                return 0;
            }
        }
    }
}
