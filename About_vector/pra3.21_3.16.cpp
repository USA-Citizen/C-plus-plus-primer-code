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
    vector<string> v{10, "No smoking in Tsinghua University"};
    vector<string>::const_iterator bit = v.begin();
    vector<string>::const_iterator eit = v.end();
    for ( ; bit != eit; ++bit )
    {
        cout << *bit << endl;
    }
    return 0;
}
