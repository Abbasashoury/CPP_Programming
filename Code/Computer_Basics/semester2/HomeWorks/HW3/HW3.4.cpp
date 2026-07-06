#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string compress(const string &s)
{
    string res = "";
    int i = 0;
    while (i < s.size())
    {
        char ch = s[i];
        int Num = 1;
        res += ch;

        while (i + Num < s.size() && s[i + Num] == ch)
            Num++;
        if (Num > 1)
            res += to_string(Num);

        i += Num;
    }
    return res;
}

string expand(const string &s)
{
    string res = "";

    for (int i = 0; i < s.size(); ++i)
    {
        char ch = s[i];

        if (isalpha(ch)) // اگه حروف باشه وارد میشه نباشه میره حرف بعدی
        {
            res += ch;

            int j = i + 1; // Start looking for a number after the character
            string num = "";

            while (j < s.size() && isdigit(s[j]))
            {
                num += s[j];
                j++;
            }

            if (!num.empty())
            {
                int count = stoi(num);

                for (int k = 1; k < count; ++k)
                    res += ch;

                i = j - 1; // چون بالا گفتیم j=i+1
            }
        }
        return res;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i)
    {
        int cmd;
        string word;

        cin >> cmd >> word;

        if (cmd == 1)
            cout << compress(word) << endl;
        else
            cout << expand(word) << endl;
    }

    return 0;
}