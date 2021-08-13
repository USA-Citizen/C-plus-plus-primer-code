#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main()
{
    int ia[] = {39, -12, 430, 492, 1112549};
    vector<int> vi( ia, ia + 5 );
    for ( auto i : vi )
        cout << i << endl;
    return 0;
}
