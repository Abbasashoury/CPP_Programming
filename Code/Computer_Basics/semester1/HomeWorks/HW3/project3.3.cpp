#include <iostream>

using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;

    if (num == 2)
        return true;

    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
            cout << i << '\n';
    }

    return 0;
}