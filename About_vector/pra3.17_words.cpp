#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v;
    string w;
    while ( cin >> w )
    {
        v.push_back(w);
    }
    for ( auto word : v )
    {
        for ( auto &ch : word )
        {
            ch = toupper(ch);
        }
        cout << word << endl;
    }
    return 0;

}
