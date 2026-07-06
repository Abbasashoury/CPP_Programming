#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;
    getline(cin, s);
    int n = s.size();

    const int MAX = 30000;
    long long st_result[MAX];
    int st_sign[MAX];
    int st_top = 0;

    long long result = 0;
    long long number = 0;
    int sign = 1;

    for (int i = 0; i < n; ++i)
    {
        char c = s[i];
        if (c == ' ')
            continue;

        if (c >= '0' && c <= '9')
        {
            number = number * 10 + (c - '0');
        }
        else if (c == '+' || c == '-')
        {
            result += sign * number;
            number = 0;
            sign = (c == '+') ? 1 : -1;
        }
        else if (c == '(')
        {
            st_result[st_top] = result;
            st_sign[st_top] = sign;
            ++st_top;
            result = 0;
            sign = 1;
            number = 0;
        }
        else if (c == ')')
        {
            result += sign * number;
            number = 0;
            --st_top;
            long long prev_result = st_result[st_top];
            int prev_sign = st_sign[st_top];
            result = prev_result + prev_sign * result;
            sign = 1;
        }
    }

    result += sign * number;
    cout << result << endl;

    return 0;
}