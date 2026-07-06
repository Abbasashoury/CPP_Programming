#include <iostream>
using namespace std;
void get(int *&a, int &n) /*************************حفظ شود*/
{
    cout << "Enter number of item:";
    cin >> n;
    a = new int[n]; /***************** */
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void print(int *a, int n) /*************************حفظ شود*/
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    int *a;      /*************************حفظ شود*/
    get(a, n);   /*************************حفظ شود*/
    print(a, n); /*************************حفظ شود*/

    delete[] a;
    /* vali baraye array haye dynamic bayad delete[] a; bezari.
     delete a; faghat avalin khane ro azad mikone va baghie hafeze azad nemishe. delete[] a; tamame hafeze array ro dorost azad mikone.*/
    print(a, n);
    return 0;
}