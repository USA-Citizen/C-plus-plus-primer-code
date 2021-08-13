#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string w1, w2;
    cin >> w1 >> w2;
    if ( w1.size() < w2.size() )
    {
        cout << w2 << endl;
        return 0;
    }
    cout << w1 << endl;
    return 0;
}
