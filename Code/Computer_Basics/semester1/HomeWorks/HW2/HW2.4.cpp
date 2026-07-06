#include <iostream>
using namespace std;

int main()
{
	int n; int m; int i=0;
	cin >> n >> m;

	while (i != m)
	{
		n /= 2;
		i++;
	}
	cout << n % 2;
	
	return 0;
}