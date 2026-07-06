#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a = 23.4445735434;
    cout << left << setw(20) << "Name" << setw(10) << "Score" << endl;
    cout << setw(20) << "Alirewrwerwrw" << setw(10) << 20 << endl;
    cout << setw(20) << "Reza" << setw(10) << 18 << endl;
    cout << fixed << setprecision(3) << a;
    return 0;
}