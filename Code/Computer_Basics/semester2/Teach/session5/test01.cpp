#include <iostream>
#include <cmath>
using namespace std;
// test to identify sin(2x)=2 sin(x).cos(x)
int main()
{
    cout << "\tx\tsin(2x)\t2sin(x).cos(x)\n";
    for (float x = 0; x < 2; x += 0.2)
        cout << "\t" << x << "\t" << sin(2 * x) << "\t" << 2 * sin(x) * cos(x) << endl;
    return 0;
}

/*
int main()
{
    for (int x = 0; x <= 10; x++)
        cout << "\t" << x << "\t" << sqrt(x) << endl;// رادیکال
    return 0;
}
*/