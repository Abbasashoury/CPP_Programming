#include <iostream>
#include <limits>
using namespace std;
int main()
{
    bool flag = true;
    char c = 'A';
    int a, b = 78;
    float s = 45.67;
    long double q = 78999.788;
    cout << "maximum short= " << SHRT_MAX << endl;
    cout << "minimum short= " << SHRT_MIN << endl;
    cout << "minimum long = " << LONG_MIN << endl;
    cout << "maximum Usigned short= " << USHRT_MAX << endl;
    cout << "size of  long double=" << sizeof(q) << endl;
    return 0;
}