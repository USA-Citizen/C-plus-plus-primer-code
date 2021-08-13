#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main()
{
    vector<int> vi = {2398, 42, 824848, -419, 428, 7777};
    int ia[vi.size()];
    vector<int>::const_iterator b = vi.begin(), e = vi.end();
    for ( int ix = 0 ; b < e; ++b, ++ix )
    {
        ia[ix] = *b;
        cout << ia[ix] << endl;
    }
    return 0;
}
