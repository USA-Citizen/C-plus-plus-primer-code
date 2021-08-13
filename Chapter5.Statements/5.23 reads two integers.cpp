#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::runtime_error;

int main()
{
    try {
    int i1 = 0, i2 = 0;
    cin >> i1 >> i2;
    if (i2 == 0)
    {
        throw runtime_error("fuck you");
    }
    int res = i1 / i2;
    cout << res << endl;
    }
    catch (runtime_error eee) {
    cout << eee.what() << "fuck me" << endl;
    }

    return 0;
}
