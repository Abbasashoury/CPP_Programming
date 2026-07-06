#include <iostream>
#include <cmath>

using namespace std;

int fact(int n)
{
	int i; int res = 1;

	for (i = 1; i <= n; i++)
		res = res * i;

	return res;
}

int main()
{
	int x, a, n, k, sum = 0;
	cin >> x >> a >> n;

	for (k = 0; k <= n; k++)
	{
		sum = sum + (fact(n) / (fact(n - k) * fact(k)))*(pow(x, k)*pow(a, (n - k)));

	}
	cout << sum;

	return 0;
}