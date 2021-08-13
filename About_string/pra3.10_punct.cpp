#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word;
    getline( cin, word );
    for ( auto &c : word )
    {
        if ( !ispunct(c) )
        {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}
