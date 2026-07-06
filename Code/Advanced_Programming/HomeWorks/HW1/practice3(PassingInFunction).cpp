/*


#include <iostream>
using namespace std;

void modify(int a, int b) {
    a += b;
    b = a - b;
    cout << "Inside: " << a << " " << b << endl;
}

int main() {
    int x = 3, y = 7;
    modify(x, y);
    cout << "Outside: " << x << " " << y << endl;
}
// Inside: 10 3
// Outside: 3 7
/////////////////////////////////


#include <iostream>
using namespace std;

void increase(int x) { x++; }
void increaseRef(int &x) { x++; }

int main()
{
    int num = 5;
    increase(num);
    increaseRef(num);
    cout << num;
}
// 6
///////////////////////////////

#include <iostream>
using namespace std;

void tricky(int &p, int &q) {
    p = ++q + p++;
}

int main() {
    int a = 2, b = 3;
    tricky(a, b);
    cout << a << " " << b << endl;
}
// 6 4
//////////////////////////////////////

#include <iostream>
using namespace std;

void update(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 5;
    update(&a);
    cout << a;
}
// چون توی فراخوانی تابع از & استفاده نشده
///////////////////////////////////////////////


#include <iostream>
using namespace std;

void mix(int a, int &b, int c) {
    a += b;
    b += c;
    c = a + b;
}

int main() {
    int x = 1, y = 2, z = 3;
    mix(x, y, z);
    cout << x << " " << y << " " << z << endl;
}
// 1 5 3


*/