#include <iostream>

using namespace std;

long long GCD(long long n, long long m)
{
	if (m == 0)
		return n;

	if (n == 0)
		return m;

	if (m > n)
	{
		int x;
		x = m;
		m = n;
		n = x;
	}

	while (m != 0)
	{
		int c = m;
		m = n % m;
		n = c;
	}

	return n;
}

long long LCM(long long n, long long m)
{
	if (n == 0 && m == 0)
		return 0;

	long long x = abs(n * m) / GCD(n, m);

	return x;
}

int main()
{
	long long n, m;
	cin >> n >> m;

	cout << GCD(n, m) << " " << LCM(n, m);

	return 0;
}