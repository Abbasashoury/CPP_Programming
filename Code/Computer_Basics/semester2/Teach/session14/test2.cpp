#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// این برنامه اطلاعات دانش آموزان را در یک فایل متنی ذخیره می کند و سپس آن را می خواند و نمایش می دهد.
struct student
{
    string name;
    float avg;
};

int main()
{
    student s1;
    fstream file1("student.txt", ios::out); //************************************** */
    for (int i = 1; i <= 2; i++)
    {
        cout << "enter name for student 1:";
        cin >> s1.name;

        cout << "avg student1:";
        cin >> s1.avg;
        file1 << s1.name << " " << s1.avg << endl;
    }
    file1.close();
    file1.open("student.txt", ios::in); //************************************** */

    string line;
    while (getline(file1, line))
    {
        cout << line << endl;
    }

    return 0;
}