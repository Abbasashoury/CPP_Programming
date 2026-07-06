#include <iostream>
using namespace std;
// این برنامه اطلاعات چند دانشجو را گرفته و دانشجویی که بیشترین معدل را دارد پیدا میکند
struct Student
{
    string name;
    int id;
    float avg;
};
void input(Student *A)
{
    getline(cin, A->name); /*********************/
    cin >> A->id;
    cin >> A->avg;
    cin.ignore();
}

void print(Student &A) // lazem nist
{
    cout << A.name << "\t" << A.id << "\t" << A.avg << endl;
}
Student find_max(Student *A, int s)
{
    Student *max = &A[0]; // pointer or reference
    for (int i = 1; i < s; i++)
    {
        if (A[i].avg > max->avg) // max is pointer
            max = &A[i];         // reference or pointer
    }
    return *max; //********* */
}

int main()
{

    Student *students = new Student[3]; /*************/ // a = new int[n];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter information for Student " << i + 1 << " :";
        input(&students[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << " information for Student " << i + 1 << " :";
        print(students[i]);
    }

    Student expensive = find_max(students, 3);

    cout << "Student with maximum averid:";

    print(expensive);
    delete[] students;
    return 0;
}

/*
// این برنامه اطلاعات چند دانشجو را گرفته و معدل هر دانشجو را محاسبه میکند
struct Student
{
    string name;
    int id;
    float scores[3];
};
void input(Student *s)
{
    cout << "Enter student name: ";
    getline(cin, s->name);

    cout << "Enter student ID: ";
    cin >> s->id;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter score " << i + 1 << ": ";
        cin >> s->scores[i];
    }

    cin.ignore();
}

float calcAverage(Student &s)
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += s.scores[i];
    }
    return sum / 3; //********
}

void print(Student &s)
{
    cout << "Name: " << s.name << ", ID: " << s.id << ", Average: " << calcAverage(s) << endl;
}
// اگه به تابعی با مرجع پاس بدی داخل اون تایع یه تابعی دیگر با همون متغیر رو نمیتونی غیر مرجع پاس بدی
int main()
{
    int n = 3;
    Student *students = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        input(&students[i]);
    }

    cout << "\n--- Students Information ---\n";
    for (int i = 0; i < n; i++)
    {
        print(students[i]);
    }

    delete[] students;
    return 0;
}

*/

/*
// این برنامه اطلاعات چند دانشجو را گرفته و دانشجویی که بیشترین معدل را دارد پیدا میکند
struct Student
{
    string name;
    int id;
    float scores[3];
};

void input(Student *s)
{
    cout << "Enter student name: ";
    getline(cin, s->name);

    cout << "Enter student ID: ";
    cin >> s->id;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter score " << i + 1 << ": ";
        cin >> s->scores[i];
    }

    cin.ignore();
}

float calcAverage(Student *s)
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += s->scores[i];
    }
    return sum / 3;
}

void print(Student *s)
{
    cout << "Name: " << s->name << ", ID: " << s->id << ", Average: " << calcAverage(s) << endl;
}

Student findTopStudent(Student *students, int n)
{
    Student *top = &students[0];

    for (int i = 1; i < n; i++)
    {
        if (calcAverage(&students[i]) > calcAverage(top)) //&students[i] address (pointer) mide, chon students[i] object ast.
                                                          // top pointer ast, pas be sorat mostaghim midim.
                                                          // واسه همین calcaverage پوینتر است پس نمیتونیم تابع پرینت رو پوینتر نزنیم
        {
            top = &students[i];
        }
    }

    return *top;
}

int main()
{
    int n = 3;
    Student *students = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        input(&students[i]);
    }

    cout << "\n--- Students Information ---\n";
    for (int i = 0; i < n; i++)
    {
        print(&students[i]);
    }

    Student top = findTopStudent(students, n);
    cout << "\n>>> Top Student:\n";
    print(&top);

    delete[] students;
    return 0;
}

*/