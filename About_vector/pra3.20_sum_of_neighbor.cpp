#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int num = 0;
    while ( cin >> num )
        vec.push_back(num);
    int sum = 0;
    int siz = vec.size();
    for ( int index = 0; index <= (siz-1)/2 ; ++index )
    {
        sum = vec[index] + vec[siz -1 -index];
        cout << sum << endl;
    }
    return 0;
}
