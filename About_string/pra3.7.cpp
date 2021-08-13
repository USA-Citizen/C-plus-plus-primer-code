#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word;
    getline( cin, word );
    for ( char &c : word )
    {
        c = 'X';
    }
    cout << word << endl;
    return 0;
}
