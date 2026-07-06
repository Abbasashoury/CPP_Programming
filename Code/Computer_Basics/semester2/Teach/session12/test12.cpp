#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[20];
	char str2[20];
	cin.getline(str1, 19);
	cin.getline(str2, 19);

	if (strncmp(str1, str2, 1))			 // strncmp compares the first n characters of two strings
		if (strncmp(str1, str2, 1) == 1) // if str1 is greater than str2
			cout << str1 << " > " << str2 << endl;
		else
			cout << str1 << " < " << str2 << endl;
	else
		cout << str1 << " = " << str2 << endl; // strcmp == 0 ➡ str1 = str2
	return 0;
}
