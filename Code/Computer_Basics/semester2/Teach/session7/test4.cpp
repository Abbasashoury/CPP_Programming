#include <iostream>

using namespace std;
// find and delete first x in array
int main()
{

    int a[6] = {3, 4, 5, 7, 3, 3};
    int x, c = 0;

    cout << "enter x:";
    cin >> x;
    int p = -1;
    for (int i = 0; i < 6; i++)
    {
        if (x == a[i])
        {
            p = i;
            break;
        }
    }
    if (p >= 0)// جابه جایی همه عناصر بعدش به عقب*************************************
    {
        for (int i = p; i < 6; i++)
        {
            a[i] = a[i + 1];
        }
    }
    //تمایش
    for (int i = 0; i < 5; i++)
        cout << " " << a[i];

    return 0;
}