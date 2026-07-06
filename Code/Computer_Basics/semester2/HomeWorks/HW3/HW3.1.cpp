#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

string format(string line)
{
    string result = "";
    string word = "";

    for (size_t i = 0; i < line.size(); ++i) // کلش رو ببین تا بفهمی که کلمه ورد رو اون الس پایین درست میکنه
    {
        if (line[i] == ' ')
        {
            if (!word.empty())
            {
                word[0] = toupper(word[0]);

                for (size_t j = 1; j < word.size(); ++j)
                    word[j] = tolower(word[j]);

                if (!result.empty())
                    result += " ";

                result += word;
                word = "";
            }
        }
        else
        {
            word += line[i];
        }
    }

    if (!word.empty()) // ممکنه رشته با فاصله تموم نشده باشه، پس آخرین کلمه هنوز توی ورد مونده.اینجا مستقین از الس بالا میاد سر این
    {
        word[0] = toupper(word[0]);

        for (size_t j = 1; j < word.size(); ++j)
            word[j] = tolower(word[j]);

        if (!result.empty())
            result += " ";

        result += word;
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> titles(n);

    for (int i = 0; i < n; ++i)
    {
        getline(cin, titles[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        cout << format(titles[i]) << endl;
    }

    return 0;
}