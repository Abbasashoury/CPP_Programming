#include <iostream>
using namespace std;
// (Dynamic Programming)
int countWays(int n)
{
    int step[1000] = {0}; // همه مقادیر را صفر می‌کنیم
    step[0] = 1;          // برای استپ 0 یک راه وجود دارد (در واقع هیچ کاری انجام ندهیم)

    for (int i = 1; i <= n; i++)
    {
        step[i] = step[i - 1]; /*****/
        if (i >= 2)
        {
            step[i] += step[i - 2]; /*******/
        }
        if (i >= 5)
        {
            step[i] += step[i - 5]; /*******/
        }
    }
    /*
    step[0] = 1
    step[1] = step[0] = 1
    step[2] = step[1] + step[0] = 1 + 1 = 2
    step[3] = step[2] + step[1] = 2 + 1 = 3 استپ 3 توش استپ 2 بوده استپ 1 هم بهش اضافه میشه
    step[4] = step[3] + step[2] = 3 + 2 = 5
    step[5] = step[4] + step[3] + step[0] = 5 + 3 + 1 = 9   چون برای عدد 5 دو شرط اجرا میشه
    step[6] = step[5] + step[4] + step[1] = 9 + 5 + 1 = 15
    step[7] = step[6] + step[5] + step[2] = 15 + 9 + 2 = 26
    */
    return step[n];
}

int main()
{
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    if (n >= 0)
    {
        int result = countWays(n);
        cout << "Number of ways to reach the top: " << result << endl;
    }
    else
    {
        cout << "Please enter a non-negative number of steps" << endl;
    }

    return 0;
}
