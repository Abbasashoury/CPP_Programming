#include <iostream>

using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			for (j = 1; j <= n; j++)
				cout << "*";
			if (n == 2)
				cout << endl;
		}
		else if (i > 1 && i < n)
		{
			cout << endl;
			for (j = 1; j <= n; j++)
			{
				if (j == 1)
					cout << "*";
				else if (j > 1 && j < n)
					cout << " ";
				else if (j == n)
					cout << "*";
			}
			cout << endl;
		}
		else if (i == n)
		{
			for (j = 1; j <= n; j++)
				cout << "*";
		}
	}
	return 0;
}