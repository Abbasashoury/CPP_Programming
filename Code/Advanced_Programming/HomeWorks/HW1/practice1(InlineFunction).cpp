/*1
#include <iostream>

using namespace std;

inline int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    long int sum = 0;
    int num1, num2;
    cin >> num1 >> num2;
    sum += add(num1, num2);
    cin >> num1 >> num2;
    sum += add(num1, num2);
    cin >> num1 >> num2;
    sum += add(num1, num2);

    cout << sum << endl ;

    return 0;
}
*/
/*2
#include <iostream>

using namespace std;

inline double maxNum(double num1, double num2)
{
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    double num1, num2, max;
    cin >> num1 >> num2;
    max = maxNum(num1, num2);

    cout << max << endl ;

    return 0;
}
*/
/*3
#include <iostream>

using namespace std;

inline int Square(int num)
{
    return num * num;
}

int main()
{
    int num, square;
    num = 2;
    square = Square(2);
    cout << "num = 2 |square:" << square << endl;
    num = 4;
    square = Square(4);
    cout << "num = 4 |square:" << square << endl;
    num = 7;
    square = Square(7);
    cout << "num = 7 |square:" << square << endl;
    num = 9;
    square = Square(9);
    cout << "num = 9 |square:" << square << endl;

    return 0;
}
*/
/*4
#include <iostream>

using namespace std;

inline double circlearea(int r)
{
    float pi = 3.14159;
    return pi * r * r;
}

int main()
{
    int r; double Area;
    r = 2;
    Area = circlearea(2);
    cout << "r = 2 |Area:" << Area << endl;
    r = 4;
    Area = circlearea(4);
    cout << "r = 4 |Area:" << Area << endl;
    r = 7;
    Area = circlearea(7);
    cout << "r = 7 |Area:" << Area << endl;
    r = 9;
    Area = circlearea(9);
    cout << "r = 9 |Area:" << Area << endl;

    return 0;
}
*/
/*5
#include <iostream>

using namespace std;

inline int Cube(int num)
{
    return num * num * num;
}

int main()
{
    int num, cube;
    cin >> num;

    cube = Cube(num);
    cout << "num =" << num << " |cube:" << cube << endl;

    return 0;
}
*/
/*6
#include <iostream>

using namespace std;

inline void swapvalues(int &num1, int &num2)
{
    int temp = 0;
    temp = num2;
    num2 = num1;
    num1 = temp;
}

int main()
{
    int x, y;
    x = 23;
    y = 56;
    cout << "x: " << x << "|y: " << y << endl;
    swapvalues(x, y);
    cout << "x: " << x << "|y: " << y << endl;

    return 0;
}
*/