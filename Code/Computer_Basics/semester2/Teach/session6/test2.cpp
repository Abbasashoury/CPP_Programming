#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int b[] = {45, 7, 8};
    int c[5] = {5, 8, 3};
    int w[5];
    // read data for array
    for (int i = 0; i < 5; i++)
    {
        cout << "enter Number for a[" << i + 1 << "]:";
        cin >> a[i];
    }

    // write array a
    for (int i = 0; i < 5; i++)
        cout << "a[" << i << "]:" << a[i] << endl;
    // copy array a to array w
    for (int i = 0; i < 5; i++)
        w[i] = a[i];

    // write array w:

    for (int i = 0; i < 5; i++)
        cout << "w[" << i << "]:" << w[i] << endl;

    // reverse a to w:***************************************************************
    for (int i = 0; i < 5; i++)
    {

        w[i] = a[4 - i];
    }

    cout << "reverse:" << endl;
    for (int i = 0; i < 5; i++)
        cout << "w[" << i << "]:" << w[i] << endl;
    return 0;
}