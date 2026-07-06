#include <iostream>

using namespace std;

int main()
{
	int n, m, i, max =0;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> m;
		if (m > max)
			max = m;
	}
	cout << max;
	return 0;
}