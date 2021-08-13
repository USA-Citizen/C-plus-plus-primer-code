#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int grade = 0;
    cin >> grade;
    string result;
//    result = ( grade >= 90 )
//    ? "High Pass!" : ( grade >= 75 )
//    ? "Pass!" : ( grade >= 60 )
//    ? "Low Pass!" : "Fail!";
    if ( grade >= 90 )
        result = "High Pass!";
    else if ( grade >= 75 )
        result = "Pass!";
    else if ( grade >= 60 )
        result = "Low Pass!";
    else
        result = "Fail!";
    cout << result;
    return 0;
}
