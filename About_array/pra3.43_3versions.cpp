#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int ia[5][6] = {
        {2, 41, 49, -4, 3, 1},
        {-4, 0, 33, 483},
        {5, 24, 71, 5},
        {8, -9, 12, 13},
        {19, 20, 22, 9}
    };

    // version 1
    using outside_array = int(&)[6];
    using inside_int = int;
    for ( outside_array p : ia )
    {
        for ( inside_int q : p )
            cout << q << " ";
        cout << endl;
    }

    // version 2
    for ( int i = 0; i < 5; ++i )
    {
        for ( int j = 0; j < 6; ++j )
            cout << ia[i][j] << " ";
        cout << endl;
    }

    // version 3
    using outside_p = int(*)[6];
    using inside_p = int(*);
    for ( outside_p p = ia; p < ia + 5; ++p )
    {
        for ( inside_p q = *p; q < *p + 6; ++q )
            cout << *q << " ";
        cout << endl;
    }

    return 0;
}
