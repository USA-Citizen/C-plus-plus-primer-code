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
    vector<string> v4{10, "hihihi"};
    for ( auto i : v4 )
    {
        cout << i << endl;
    }
    return 0;
}
