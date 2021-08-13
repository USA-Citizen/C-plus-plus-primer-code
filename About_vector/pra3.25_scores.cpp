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
    vector<unsigned> scores(11, 0);
    unsigned int grade;
    vector<unsigned>::iterator it = scores.begin(),
                               ite = scores.end();
    while ( cin >> grade )
    {
        if ( grade <= 100 )
        {
            *(it+(grade/10)) += 1;
        }
    }
    for ( ; it != ite; ++it )
        cout << *it << endl;
    return 0;
}
