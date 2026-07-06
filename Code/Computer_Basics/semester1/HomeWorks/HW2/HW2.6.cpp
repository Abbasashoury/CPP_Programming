#include <iostream>
#include <cmath>

using namespace std;

int ToDecimal(int y)
{
    int i, x;
    i = x = 0;
    x = x + ((y % 10) * pow(2, i));
    y = y / 10;
    i++;
    return x;
}
int DecimalTo(int x, int y)
{
    int i, n;
    i = 0;
    n = x % y;
    x = x * (n * pow(2, i));
    i++;
    return x;
}

int main()
{
    int a, b, c, decimal = 0, rev = 0, digit, x = 1;
    cin >> a >> b >> c;

    if (b == 10)
    {
        if (c < 10)
        {
            while ((a / c) > c)
                DecimalTo(a, c);
        }
        else (c == 10);
        a = x;
    }
    else (b < 10);
    {
        if (c < 10)
        {
            while (a != 0)
                ToDecimal(a);
            while ((decimal / c) > c)
                DecimalTo(decimal, c);
        }
        else (c == 10);
        {
            while (a != 0)
                ToDecimal(a);
        }
    }

    while (x > 0)
        {
         digit = x % 10;
         rev = rev * 10 + digit;
         x /= 10;
    }

    if (x == rev)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}