#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<int> vi{31, 342, -95139, 0, -1};
    int sum;
    vector<int>::const_iterator b = vi.begin(), e = vi.end()-1;
    for ( ; b != e; ++b, --e )
    {
        sum = *b + *e;
        cout << sum << endl;
    }
    return 0;
}
