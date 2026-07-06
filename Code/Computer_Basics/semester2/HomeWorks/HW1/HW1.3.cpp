#include <iostream>

using namespace std;

int is_prime(int temp);
int divisor(int temp);
bool isPrimeNumber(int num);
int countPrimesLessThan(int num);

int main()
{
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int totalPrice = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        arr[i] = is_prime(temp);
        totalPrice += arr[i];
    }

    int discount = 0;
    if (isPrimeNumber(totalPrice))
    {
        discount = countPrimesLessThan(totalPrice);
    }
    else
    {
        discount = divisor(totalPrice);
    }

    int finalPrice = totalPrice - discount;

    cout << "Final Price: " << finalPrice << endl;

    return 0;
}

int is_prime(int temp)
{
    if (isPrimeNumber(temp))
    {
        return countPrimesLessThan(temp);
    }
    else
    {
        return divisor(temp);
    }
}

int divisor(int temp)
{
    int count = 0;
    for (int i = 1; i <= temp; i++)
    {
        if (temp % i == 0 && isPrimeNumber(i))
        {
            count++;
        }
    }
    return count;
}

int countPrimesLessThan(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (isPrimeNumber(i))
        {
            count++;
        }
    }
    return count;
}

bool isPrimeNumber(int num) /********/
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
