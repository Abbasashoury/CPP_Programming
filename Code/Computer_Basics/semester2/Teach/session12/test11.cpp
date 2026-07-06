#include <iostream>
#include <string>
using namespace std;
// this function removes leading and trailing spaces from x
void trim(string &x)
{
     int k = 0; // k will procced to the first non-blank char
     while (k < x.size() && (x[k] == ' ' || x[k] == '\t' || x[k] == '\n'))
          k++;
     x.erase(0, k);

     int s = x.size();
     // s will move backward to the rightmost non-blank char
     while (s > 0 && (x[s - 1] == ' ' || x[s - 1] == '\t' || x[s - 1] == '\n'))
          s--;
     x.erase(s); // از اینجا به بعد پاک میشه
}

int main()
{
     string x = "        my name is ali    ";
     trim(x);
     cout << x << endl;
     return 0;
}
