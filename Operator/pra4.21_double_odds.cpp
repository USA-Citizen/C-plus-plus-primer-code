#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> vi  = {1, 3, -42, 2, -42, 95, -55, 100, 9439};
    vector<int>::iterator b = vi.begin();
    for ( ; b != vi.end(); ++b )
    {
        *b = ( ( *b % 2 != 0 ) ? 2 * *b : *b );
        cout << *b << endl;
    }
    return 0;
}
