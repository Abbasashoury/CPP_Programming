#include <iostream>
#include <string>

using namespace std;

string processString(const string &input)
{
    string result;
    for (char ch : input)
    {
        if (ch == '=')
        {
            if (!result.empty())
            {
                result.pop_back();
            }
        }
        else
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    string input;
    getline(cin, input);

    string output = processString(input);
    cout << output << endl;

    return 0;
}