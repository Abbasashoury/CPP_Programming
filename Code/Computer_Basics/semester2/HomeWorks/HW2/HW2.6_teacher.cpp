#include <iostream>
using namespace std;
// (Greedy Algorithm)
int main()
{
    int money;
    cout << "Enter amount of money (in Tomans): ";
    cin >> money;

    int bills[] = {50000, 10000, 5000, 2000, 1000}; // اسکناس‌ها
    int count[5] = {0};                             // تعداد هر اسکناس

    for (int i = 0; i < 5; i++)
    {
        count[i] = money / bills[i]; // چندتا از این اسکناس میشه داد
        money = money % bills[i];    // باقیمانده پول
    }

    cout << "Minimum number of bills:\n";
    for (int i = 0; i < 5; i++)
    {
        if (count[i] > 0)
            cout << bills[i] << " Toman : " << count[i] << " pieces\n";
    }

    return 0;
}
