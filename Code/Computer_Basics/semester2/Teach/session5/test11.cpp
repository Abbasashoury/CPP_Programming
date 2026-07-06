#include <iostream>
using namespace std;
// overloading
int add(int x, int y)
{
    cout << "int_add: ";
    return (x + y);
}

double add(double x, double y)
{
    cout << "double_add: ";
    return (x + y);
}

string add(string x, string y)
{
    cout << "string_add: ";
    return (x + y);
}

int main()
{

    cout << add(4, 5) << endl;
    cout << add(4.0, 5.5) << endl;
    cout << add("4", "5") << endl;

    return 0;
}