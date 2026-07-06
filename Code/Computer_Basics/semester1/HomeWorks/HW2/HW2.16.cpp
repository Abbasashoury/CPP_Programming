#include <iostream>

using namespace std;

int main()
{
	int n, m, i, sum = 1;
	cin >> n;

	m = n / 2;

	for (i = 2; i <= m; i++)
	{
		if ((n % i) == 0)
			sum = sum + i;
	}
	if (sum == n)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}