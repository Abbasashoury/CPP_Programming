/*
// 1
#include <iostream>

using namespace std;

int fibonacci(int f1, int f2, int n)
{
    if (n == 1)
        return f2;
    return fibonacci(f2, f1 + f2, n - 1);
}

int main()
{
    int f1 = 0, f2 = 1, n;
    cin >> n;

    if (n == 1)
        cout << f1;
    else if (n == 2)
        cout << f2;
    else
        cout << fibonacci(f1, f2, n - 1);

    return 0;
}

// 2
#include <iostream>

using namespace std;

bool isPalindrome(string sentence, int start, int end)
{
    if (start == end)
        return true;
    if (sentence[start] != sentence[end])
        return false;

    return isPalindrome(sentence, start + 1, end - 1);
}

int main()
{
    string sentence;
    int start, end;
    cin >> sentence;
    start = 0;
    end = sentence.length() - 1;

    cout << boolalpha;
    cout << isPalindrome(sentence, start, end) << endl;

    return 0;
}

// 3
#include <iostream>

using namespace std;

int Power(int base, int exp)
{

    if (exp == 0)
        return 1;
    return base * Power(base, exp - 1);
}

int main()
{
    int base, exp;
    cin >> base >> exp;

    cout << Power(base, exp) << endl;

    return 0;
}

// 4
#include <iostream>

using namespace std;

int findmax(int a[], int size, int n)
{
    int max = 0;
    if (n == -1)
        return max;
    int pre = findmax(a, size, n - 1);
    max = (a[n] > pre) ? a[n] : pre;
}

int main()
{
    int a[] = {2, 4, 1, 9, 5, 6};
    int n = 5;
    int size = 6;

    cout << findmax(a, size, n) << endl;

    return 0;
}

// 5
#include <iostream>
using namespace std;

int countTrailingZeros(int n)
{
    if (n < 5)
        return 0;
    else
        return n / 5 + countTrailingZeros(n / 5);
}

int main()
{
    int n = 0;
    cin >> n;
    cout << countTrailingZeros(n) << endl;

    return 0;
}

// 6
#include <iostream>
using namespace std;

void toBinary(int num)
{
    if (num == 0)
        return;

    toBinary(num / 2);
    cout << num % 2;
}

int main()
{
    int num = 0;
    cin >> num;

    if (num == 0)
        cout << "0";
    else
        toBinary(num);

    return 0;
}

// 7
#include <iostream>
using namespace std;

long int sumArray(int arr[], int size, int i)
{
    if (i == size)
        return 0;
    return arr[i] + sumArray(arr, size, i + 1);
}

int main()
{
    int arr[] = {5, 4, 9, 3, 12, 10};
    int size = 6;
    int i = 0;

    cout << sumArray(arr, size, i);

    return 0;
}

// 8
#include <iostream>
using namespace std;

string reverseString(string sentence, int i)
{
    if (i < 0)
        return "";
    return sentence[i] + reverseString(sentence, i - 1);
}

int main()
{
    string sentence;

    getline(cin, sentence);
    int i = sentence.length() - 1;

    cout << reverseString(sentence, i);

    return 0;
}

// 9
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size, int i)
{
    if (i == size - 1)
        return true;
    if (arr[i] > arr[i + 1])
        return false;

    return isSorted(arr, size, i + 1);
}

int main()
{
    int i = 0;
    int arr[] = {1, 2, 3, 2, 4, 2, 4, 1, 3, 3, 3};
    int size = 11;
    int arr2[] = {1, 2, 3, 4, 5, 6, 9};
    int size2 = 7;
    int arr3[] = {1, 5, 14, 89, 410, 810};
    int size3 = 6;

    cout << boolalpha;
    cout << isSorted(arr, size, i) << endl;
    cout << isSorted(arr2, size2, i) << endl;
    cout << isSorted(arr3, size3, i) << endl;

    return 0;
}

// 10
#include <iostream>
using namespace std;

string printSubstrings(string sentence, int end, int base, int varry)
{
    if (base > end)
        return "";

    if (varry > end)
        return printSubstrings(sentence, end, base + 1, base);

    string current = sentence.substr(base, varry - base + 1);

    return current + "||" + printSubstrings(sentence, end, base, varry + 1);
}

int main()
{
    string sentence;
    getline(cin, sentence);
    int end = sentence.length() - 1;

    cout << printSubstrings(sentence, end, 0, 0);

    return 0;
}

// 11
#include <iostream>
using namespace std;

void sumOfDigits(int num, int sum = 0)
{

    if (num == 0)
    {
        cout << sum;
        return;
    }

    sumOfDigits(num / 10, sum + num % 10);
}

int main()
{
    int num = 0;
    cin >> num;

    sumOfDigits(num);

    return 0;
}

// 12
#include <iostream>
using namespace std;

void countDigits(int num, int count = 0)
{
    if (num == 0)
    {
        cout << count;
        return;
    }
    count++;

    countDigits(num / 10, count);
}

int main()
{
    int num = 0;
    cin >> num;

    countDigits(num);

    return 0;
}

// 13
#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    int num = 0;
    cin >> num;

    cout << factorial(num);

    return 0;
}

// 14
#include <iostream>
using namespace std;

int sumToN(int num)
{
    if (num == 0)
        return 0;

    return num + sumToN(num - 1);
}

int main()
{
    int num = 0;
    cin >> num;

    cout << sumToN(num);

    return 0;
}

// 15
#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int num, int i, int count = 0)
{
    if (i == size)
        return count;

    if (arr[i] == num)
        count++;

    return countOccurrences(arr, size, num, i + 1, count);
}

int main()
{
    int num = 0, i = 0, count = 0, size = 11;
    int arr[] = {1, 2, 3, 2, 4, 2, 4, 1, 3, 3, 3};
    cin >> num;

    cout << countOccurrences(arr, size, num, i, count);

    return 0;
}
*/