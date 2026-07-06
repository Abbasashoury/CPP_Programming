#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &xr = x; // &x = &xr یهنی رفرتس فقط اسم مستعاره نه ادرس خونه x***********************
    int &xr1 = x;
    int &xr2 = xr1;
    cout << "X:" << x << "    &X:" << &x << "    Xr:" << xr << "    &xr:" << &xr;
    xr++; // اینحا هم همون x رو تعییر میده
    cout << "    X:" << x;
    int *p = &x;
    cout << endl;
    cout << "  p:" << p << "\t &p:" << &p << "  *p:" << *p;

    cout << endl;
    cout << endl;
    return 0;
}