#include <iostream>
using namespace std;
int &max(int &m, int &n) //**************************** */
{
    return (m > n ? m : n);
}

int main()
{
    int x = 10, y = 20;
    cout << "x:" << x << " y:" << y << "\tmax:" << max(x, y);
    max(x, y) = 5; //**************************** */
    cout << endl;
    cout << "x:" << x << " y:" << y << "\tmax:" << max(x, y);
    cout << endl;
    cout << endl;
    return 0;
}
