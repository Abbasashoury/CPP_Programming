#include <iostream>
#include <iomanip>
using namespace std;
// این کد برای 5 تا دانشجو اسم و معدل میگیره و چاپ میکنه
struct student
{
    string name;
    float avg;
} s1, s2;

int main()
{
    // student s3;
    student list[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter name for student" << i + 1 << ":";
        cin >> list[i].name;
        cout << "avg student" << i + 1 << ":";
        cin >> list[i].avg;
    }
    for (int i = 0; i < 5; i++)
        cout << list[i].name << setw(10) << list[i].avg << endl;
    return 0;
}