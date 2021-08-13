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
    vector<string> text;
    string slice;
    while ( getline( cin, slice ) )
        text.push_back(slice);
    vector<string>::iterator itb = text.begin();
    vector<string>::iterator ite = text.end();
    for ( ; itb != ite && !itb->empty(); ++ itb )
    {
        for ( string::iterator it1 = itb->begin();
              it1 != itb->end(); ++it1)
              *it1 = toupper(*it1);
        cout << *itb << endl;
    }
    return 0;
}
