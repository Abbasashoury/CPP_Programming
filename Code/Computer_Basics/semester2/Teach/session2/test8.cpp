#include <iostream>
using namespace std;
int main()
{
    // claculate salary, tax , net
    float s, tax, net;
    cout << "Enter Salary:" << endl;
    cin >> s;
    if (s < 400)
    {
        tax = 0;
    }
    else if (s < 500)
    {
        tax = (s - 400) * 0.05;
    }
    else
    {
        tax = 100 * 0.05 + (s - 500) * 0.12;
    }
    net = s - tax;
    cout << "s= " << s << " ,tax= " << tax << " ,net = " << net;
    return 0;
}