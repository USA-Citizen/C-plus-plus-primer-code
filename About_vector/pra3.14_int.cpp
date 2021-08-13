#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::endl;

int main()
{
    vector<string> vs;
    string w;
    while ( cin >> w )
    {
        vs.push_back(w);
        cout << w << endl;
    }
    return 0;
}
