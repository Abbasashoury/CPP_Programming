#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int n = 10, *p;
    p = &n;
    cout << "n :" << n << "\t &n:" << &n << endl;
    cout << "p :" << p << "\t &p:" << &p << "\t *p:" << *p << endl;

    *p += 10;
    cout << "n :" << n << endl;
    n -= 2;
    cout << "*p :" << *p << endl;

    return 0;
}

/*pointer
void circle(float r, float *, float *);

int main()
{

    float r, x, y;
    r = 2.5;
    circle(r, &x, &y);
    cout << "S = " << x << "P = " << y;
    return 0;
}

void circle(float r, float *S, float *P)
{
    *S = 3.14 * r * r;
    *P = 2 * 3.14 * r;
}
*/

/*reference
int main()
{
    int a = 100;
    int &b = a;
    b = 200;
    cout << "a:" << a << " ,b: " << b;
    return 0;
}
*/