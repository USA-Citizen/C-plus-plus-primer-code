#include <iostream>

using namespace std;

int main()
{
    const int i = -1, &r = 0;

    cout << i << " " << r << endl;

    return 0;
}
