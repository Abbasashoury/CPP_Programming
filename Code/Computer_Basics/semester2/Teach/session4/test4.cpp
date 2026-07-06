#include <iostream>
using namespace std;
int main()
{
    int max, n;
    cout << "enter one number (0 to exit):";
    cin >> n;
    for (max = n; n > 0;)
    {
        if (n > max)
            max = n;
        cin >> n;
    }
    cout << "max=" << max;
    return 0;
}