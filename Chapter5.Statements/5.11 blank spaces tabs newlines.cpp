#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int countVowel = 0;
    int countBlank = 0;
    int countTwoChar = 0;
    string s;
    while (getline(cin, s))
    {
        for (string::size_type index = 0; index < s.size(); ++index)
        {
            char c = s[index];
            switch (c)
            {
                case 'a':case 'e':case 'i':case 'o':case 'u':
                case 'A':case 'E':case 'I':case 'O':case 'U':
                    ++countVowel;
                    break;
                case ' ':case '\t':case '\n':
                    ++countBlank;
                    break;
                case 'f':
                    if (index+1 < s.size())
                    {
                        switch (s[index+1])
                        {
                            case 'f':case 'l':case 'i':
                                ++countTwoChar;
                                break;
                        }
                    }
                default:
                    break;

            }
        }
        cout << "Vowels:" << countVowel << endl;
        cout << "Blanks:" << countBlank << endl;
        cout << "TwoChar:" << countTwoChar << endl;

    }
    return 0;
}
