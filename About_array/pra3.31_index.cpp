#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

int main()
{
    int ia[10];
    int n = 0;
    for ( auto &i : ia )
    {
        i = n;
        n++;
        cout << i << endl;
    }

    int ia2[10];
    for ( int index = 0; index < 10; ++index )
    {
        ia2[index] = ia[index];
        cout << ia2[index] << endl;
    }

    vector<int> v1(10, 0);
    vector<int> v2 = v1;

    return 0;
}
