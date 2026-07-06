#include <iostream>
#include <iomanip>

using namespace std;

long int pow(int base, int exp)
{
    long int result = 1;

    for (int i = 1; i <= exp; i++)
        result *= base;

    return result;
}

double fact(int num)
{
    double result = 1;

    while (num > 1)
    {
        result *= num;
        num--;
    }
    return result;
}

double func(int x, int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += (double)pow(x, i) / fact(i);
    }
    return sum;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << fixed << setprecision(3);
    cout << func(x, n) << endl;

    return 0;
}