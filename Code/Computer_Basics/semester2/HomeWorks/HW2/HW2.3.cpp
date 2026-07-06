#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValid(const string &s) //*************
{
    if (s.empty() || s.size() > 3)
        return false;
    if (s[0] == '0' && s.size() > 1)
        return false;
    int num = stoi(s);
    return num >= 0 && num <= 255;
}

void backtrack(const string &s, int start, int parts, string current, vector<string> &result) //*************
{
    if (parts == 4 && start == s.length()) //*************
    {
        result.push_back(current.substr(1));
        return;
    }
    if (parts >= 4 || start >= s.length())
        return;

    for (int len = 1; len <= 3 && start + len <= s.length(); ++len) //*************
    {
        string segment = s.substr(start, len);
        if (isValid(segment))
        {
            backtrack(s, start + len, parts + 1, current + "." + segment, result);
        }
    }
}

int main()
{
    string input;
    cin >> input;

    vector<string> validIPs;
    backtrack(input, 0, 0, "", validIPs);

    for (const string &ip : validIPs)
    {
        cout << ip << endl;
    }

    return 0;
}
