#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string total, curr;
    while ( cin >> curr )
    {
        total += curr + ' ';
    }
    cout << total << endl;
    return 0;
}
