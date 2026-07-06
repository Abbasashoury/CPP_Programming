#include <iostream>
using namespace std;
// call by const refrence
void f(int, int &, const int &);

int main()
{
    int a, b, c;
    a = 20;
    b = 30;
    c = 40;
    cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
    f(a, b, c);
    cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
    f(2 * a - 2, b, c);
    cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
    return 0;
}

void f(int x, int &y, const int &z)
{
    x += z;
    y += z;
    cout << "X=" << x << ",y=" << y << ",z=" << z << endl;
}