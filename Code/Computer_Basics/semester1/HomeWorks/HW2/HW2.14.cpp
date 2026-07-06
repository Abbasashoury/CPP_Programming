#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int h, m, orgh, orgm;
	cin >> h >> m;

	orgh = (12 - h) % 12;
	orgm = (60 - m) % 60;

	cout << setfill('0') << setw(2) << orgh;
	cout << ":";
	cout << setfill('0') << setw(2) << orgm;

	return 0;
}