#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr[5] = {3, -4, 39, -544, 40};
    int *pbeg = begin(arr), *pend = end(arr);
    while ( pbeg < pend )
    {
        *pbeg = 0;
        cout << *pbeg << endl;
        pbeg += 1;
    }
    return 0;
}
