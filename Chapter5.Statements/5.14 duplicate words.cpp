#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    getline (cin, s);
    string curWord = "", preWord = "", maxTimeWord = "";
    string::size_type curTime = 1, maxTime = 1;
    auto beg = s.begin();
    while (beg != s.end())
    {
        if (*beg != ' ')
        {
            curWord += *beg;
        }
        else
        {

                if (curWord == preWord)
                {
                    curTime += 1;
                    if (curTime > maxTime)
                    {
                        maxTime = curTime;
                        maxTimeWord = curWord;
                    }
                }
                else
                {
                    curTime = 1;
                }
                preWord = curWord;
                curWord = "";
        }
        ++beg;
    }
    if (maxTime > 1)
    {
        cout << "Word " << maxTimeWord << " appears " << maxTime << " times." << endl;
    }
    else
    {
        cout << "No word appears more than once." << endl;
    }
    return 0;
}
