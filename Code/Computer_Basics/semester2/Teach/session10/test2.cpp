#include <iostream>
using namespace std;
// شیوه فراخوانی تابع با مرجع
void f1(int &);
void f2(int *);

int main()
{
    int x = 10;
    f1(x);
    cout << x;
    f2(&x);
    cout << "\n"
         << x;
    cout << endl;
    cout << endl;
    return 0;
}
void f1(int &a)
{
    a++;
}
void f2(int *a)
{
    ++*a; // *a چون متغیر اشارع گریه هرحا بایذ از * استغاده منی برای استفاده ازش
}