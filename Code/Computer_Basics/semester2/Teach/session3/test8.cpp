#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter a Number: " << endl;
    cin >> n;
    int flag = 1;
    if (n < 0)
    {
        n = -n;
        flag = -1;
    }

    while (n > 0) // برعکس میکنه
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout << flag * rev;
    return 0;
}