#include <iostream>
using namespace std;

int main()
{
	int n; int saal = 0; int maah = 0;
	cin >> n;

	saal = n / 100;
	maah = n % 100;

	if (saal < 10)
	{
		cout << "saal:" << "0" << saal << endl;
	}
	else {cout << "saal:" << saal << endl;}
	if (maah < 10)
		{
		cout << "maah:" << "0" << maah << endl;
		}
	else { cout << "maah:" << maah; }

	return 0;
}