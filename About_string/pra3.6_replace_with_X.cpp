#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word;
    getline( cin, word );
//    int num = word.size();
//    for ( int i = 0; i < num; i++ )
//        word[i] = 'X';
    for ( auto &c : word )
    {
        c = 'X';
    }
    cout << word << endl;
    return 0;
}
// Why????????????????????????????????
