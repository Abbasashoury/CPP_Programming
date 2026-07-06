#include <iostream>
using namespace std;
int main()
{
    int a[3] = {3, 6, 7};
    int size = sizeof(a) / sizeof(a[0]); /*******/
    cout << a << endl;                   /*******/
    int *end = a + size;                 /*******/
    for (int *p = a; p < end; p++)       /*****اشاره به ادرس ایتجوریه**/
    {
        cout << p << "\t" << *p << endl; // pادرسه ولی *P مختوای جایی که Pبهش اشاره داره
    }
    cout << end << endl
         << *end << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a + i << "\t" << *(a + i) << endl; /*******/
    }
    return 0;
}

/*

int main()
{

  char a[] = {'A', 'B', 'C', 'D'};
  char *p = a;

  cout << sizeof(char) << endl;

  int size_a = sizeof(a) / sizeof(a[0]);

  char *end = a + size_a;
  cout << "p:" << p << "\t end:" << end << endl;

  for (p; p < end; p++) //********
    cout << "p:" << p << "\t*p:" << *p << endl;
return 0;

}
*/