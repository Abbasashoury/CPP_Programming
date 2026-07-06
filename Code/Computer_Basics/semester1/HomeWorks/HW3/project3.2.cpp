#include <iostream>
#include <cmath>

using namespace std;

int fact(int num)
{
    int result = 1;

    while (num > 1)
    {
        result = result * num;
        num--;
    }
    return result;
}

int composition(int k, int n)
{
    int res;
    res = fact(n) / (fact(n - k) * fact(k));

    return res;
}

int func(int k, int x, int a, int n)
{
     
    int res = composition(k, n) * (pow(x, k)) * (pow(a, (n - k)));

    return res;
}

int main()
{
    int n, x, k, a, i;
    int final=0;
    cin >> a >> x >> n;

    for (i = 0 ; i <= n; i++)
    {
        
        final = final + func(i, x, a, n);

    }
    cout << final;

    return 0;
}