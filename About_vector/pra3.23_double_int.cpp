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
    vector<int> vi(10, -334);
    for ( vector<int>::iterator itb = vi.begin();
          itb != vi.end(); ++itb)
    {
        *itb *= 2;
        cout << *itb << endl;
    }
    return 0;
}
