#include <iostream>
#include <string>
using namespace std;
// این برنامه اطلاعات کتاب ها را دریافت می کند و گران ترین کتاب را پیدا می کند.
struct Book
{
    string title;
    string author;
    float price;
};

void input(Book &);
void print(Book);
Book findmax(Book[], int); // چون خروجیش book است

int main()
{
    int size = 3;
    Book books[size];

    cout << "Enter 3 Book information:\n ";

    for (int i = 0; i < size; i++)
    {
        input(books[i]);
    }

    cout << "print 3 book information:\n";
    for (int i = 0; i < size; i++)
    {
        print(books[i]);
    }

    Book Expensive = findmax(books, size);
    cout << "Expensive book:\n";
    print(Expensive);

    return 0;
}
void input(Book &b)
{
    cout << "Book name : ";
    getline(cin, b.title);
    cout << "Book auther : ";
    getline(cin, b.author);
    cout << " Book price: ";
    cin >> b.price;
    cin.ignore();
}
void print(Book b)
{
    cout << "Title: " << b.title << " Author: " << b.author << " Price:" << b.price << endl;
}
Book findmax(Book b[], int s)//******************************** */
{
    Book max = b[0]; // فرض می‌کنیم اولین کتاب گران‌ترین است************************************
    for (int i = 1; i < s; i++)
    {
        if (b[i].price > max.price)
            max = b[i];
    }
    return max;
}

/*
// این برنامه اطلاعات دانش آموزان را دریافت می کند و چاپ می کند
#include <cstring>

struct student
{
    string name;
    int age;
    float avg;
};

void print_std(student *p, int n)//****************************************اگه اشاره گری بفرستی لازم نیست براکت براش بزاری
{
    for (int i = 0; i < n; i++)
        cout << "(" << p[i].name << "," << p[i].age << "," << p[i].avg << ")" << endl;
}

int main()
{
    int n;
    cout << "Enter number of student";
    cin >> n;
    student s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "name:";
        cin >> s[i].name;

        cout << "age:";
        cin >> s[i].age;

        cout << "avg:";
        cin >> s[i].avg;
    }
    print_std(s, n);

    return 0;
}
*/