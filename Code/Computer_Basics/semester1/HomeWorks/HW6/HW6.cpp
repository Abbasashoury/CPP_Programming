// یاده سازی یک دفترچه تلفن در فایل متنی با قابلیت افزودن افراد و جستجو.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

struct users
{
    string fname, lname, phone_num;
} user;
void addContact();
void searchContact();
void help();
void self_exit();
bool check_digits(string);
bool check_numbers(string);
void self_exit()
{
    system("cls");
    cout << "\n\n\n\t\tThank You for using Contact-Saver!";
    exit(1);
}
void help()
{
    cout << "Help Center";
    cout << endl
         << endl;
    system("pause");
    system("cls");
}
void addContact()
{
    ofstream phone("number.txt", ios::app);
    system("cls");
    cout << "\n\n\tEnter First Name : ";
    cin >> user.fname;
    cout << "\n\tEnter Last Name : ";
    cin >> user.lname;
    cout << "\n\tEnter Phone Number : ";
    cin >> user.phone_num;
    if (check_digits(user.phone_num) == true)
    {
        if (check_numbers(user.phone_num) == true)
        {
            if (phone.is_open())
            {
                phone << user.fname << " " << user.lname << " "
                      << user.phone_num << endl;
                cout << "\n\tContact saved successfully !";
            }
            else
            {
                system("color 04");
                cout << "\n\tError in opening record!";
            }
        }
        else
        {
            system("color 04");
            cout << "\n\tOnly numbers are allowed!";
        }
    }
    else
    {
        system("color 04");
        cout << "\n\tPhone number should be of 10 digits "
                "only.";
    }
    cout << endl;
    phone.close();
    system("pause");
    system("color 0A");
}
void searchContact()
{
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;

    cout << "\n\tEnter Name to search : ";
    cin >> keyword;
    while (myfile >> user.fname >> user.lname >> user.phone_num)
    {
        if (keyword == user.fname || keyword == user.lname)
        {
            system("cls");
            cout << "\n\n\n\t\tCONTACT DETAILS";
            cout << "\n\nFirst Name : " << user.fname;
            cout << "\nLast Name : " << user.lname;
            cout << "\nPhone Number : " << user.phone_num;
            found = true;
            break;
        }
    }
    if (found == false)
        cout << "\nNo such contact is found!";
    cout << endl
         << endl;
}
bool check_digits(string x)
{
    if (x.length() == 10)
        return true;
    else
        return false;
}
bool check_numbers(string x)
{
    bool check = true;
    for (int i = 0; i < x.length(); i++)
        if (!(int(x[i]) >= 48 && int(x[i]) <= 57))
        {
            check = false;
            break;
        }
    if (check == true)
        return true;
    return false;
}

int main()
{
    int choice;
    system("cls");
    system("color 0A");
    while (1)
    {
        cout << "\n\t\t\tCONTACT SAVER";
        cout << "\n\n\t1. Add Contact\n\t2. Search "
                "Contact\n\t3. Help\n\t4. Exit\n\t> ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            searchContact();
            break;
        case 3:
            help();
            break;
        case 4:
            self_exit();
            break;
        default:
            cout << "\ntInvalid Input!";
        }
    }
    return 0;
}
