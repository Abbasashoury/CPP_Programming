#include <iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	// convert to lowercase
	if (ch >= int('A') && int(ch) <= int('Z'))
		ch = ch + 32;
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << " Vowels";
		break;
	default:
		cout << "Consonants";
	}
	return 0;
}