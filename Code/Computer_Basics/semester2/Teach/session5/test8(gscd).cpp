#include <iostream>
using namespace std;

int s = 10;
void func1()
{
    int s = 0;
    s++;
    cout << "Local variable:" << s << endl;
    // a++;
    // cout << a;
}

void func2()
{
    s++;
    cout << "global variable:" << s << endl;
}
int main()
{
    func1();
    func1();
    // int a;
    func2();
    func2();
    cout << "main " << s << endl;

    return 0;
}

/*
int s = 10;
void func()
{
    static int s = 0;
    s++;
    cout << "Local static: " << s << endl;
    s = 2;
    cout << s << endl;
}
int main()
{
    func();
    func();
    func();
    func();

    cout << "Global:" << s << endl;
    return 0;
}
*/

/*
int main()
{
    const int x = 2;// read only for local
    x++;
    cout << x;
}
*/

/*
#define x 2 //read only for global
int main()
{
    cout << x;
}
*/