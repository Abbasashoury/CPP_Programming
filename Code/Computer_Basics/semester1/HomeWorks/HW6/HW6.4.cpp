// دقیقا مطابق خواسته سوال نبودهس

#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>
using namespace std;

void write_string_in_file()
{
    ofstream of;
    of.open("f2.txt", ios::app);
    if (!of)
    {
        cout << "Error";
        exit(1);
    }
    string name;
    cout << "Enter name:";
    cin >> name;
    int age;
    cout << "Enter age:";
    cin >> age;
    float avg;
    cout << "Enter avg:";
    cin >> avg;
    of << name << " " << age << " " << avg << "\n";
    of.close();
}
void read_line_in_file()
{
    ifstream in;
    in.open("f2.txt");
    if (!in)
    {
        cout << "Error";
        exit(1);
    }
    string line;
    while (getline(in, line))
    {
        cout << line << endl;
    }
    in.close();
}
void write_char_in_file()
{
    ofstream out;
    out.open("f1.txt", ios::app);
    if (!out)
    {
        cout << "Error in open file!";
        exit(1);
    }
    char ch;
    cin.get(ch);
    while (ch != '\n')
    {
        out.put(ch);
        cin.get(ch);
    }
    out.put('\n');
    out.close();
}
void read_char_from_file()
{
    ifstream in;
    in.open("f1.txt", ios::in);
    if (!in)
    {
        cout << "Err";
        exit(1);
    }
    while (!in.eof())
    {
        char ch;
        in.get(ch);
        cout << ch;
    }
    in.close();
}
void search()
{
    ifstream in;
    in.open("f2.txt");
    if (!in)
    {
        cout << "Error";
        exit(1);
    }
    char name[21];
    int age;
    float avg;
    char keyword[21];
    cin.ignore();
    cout << "Enter key:";
    cin.get(keyword, 21);
    while (in >> name >> age >> avg)
    {
        if (strcmp(name, keyword) == 0)
            cout << name << ":" << avg;
    }
    in.close();
}

int main()
{
    system("color 0A");
    cout << "Enter your txt then press \"Enter\":";
    write_char_in_file();
    cout << "Display all content of the file(char_by_char):" << endl;
    read_char_from_file();
    cout << endl
         << "Add a user in file:" << endl;
    write_string_in_file();
    cout << endl
         << "Add a user in file:" << endl;
    write_string_in_file();
    cout << "Display all content of the file(line_by_line):" << endl;
    read_line_in_file();
    cout << endl
         << "search in file:" << endl;
    search();
    return 0;
}
