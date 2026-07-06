#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
  char a = 'a';

  cout << isalpha(a) << endl;
  cout << isalnum(a) << endl; // خرف یا عدد باشد
  cout << isdigit(a) << endl;
  cout << ispunct(a) << endl; // علامت نگارشی باشد
  cout << isupper(a) << endl;
  cout << islower(a) << endl;
  cout << char(tolower(a)) << endl;
  cout << char(toupper(a)) << endl;

  /****************************************************************************** */
  // srting
  string name0 = "reza";
  name0[0] = 'A';  // change content of string is allowed
  name0 = "ahmad"; // change string is allowed
  
  // char array or C-style string
  char name2[] = "mohammad and Ali";
  name2[0] = 'B'; // change content of string is allowed
                  // name2="ahmad" ; Error;
  cout << name2 << endl;

  char *name4 = "mohammadreza";
  name4 = "reza"; // change pointer is allow
                  // name4[0]='s'; Error Not allowed to change content of string
  cout << name4 << endl;
  // char *const name3 = "alireza"; // name3="reza" Error;

  cout << strlen(name2) << endl;
  cout << name0.length() << endl;

  cout << strstr(name2, "Ali") << endl;
  cout << name0.find("Ali") << endl;

  cout << name0[0] << endl
       << name0.at(0) << endl // allow 2 model for string
       << name2[0] << endl;   // cout << name2.at(0) ; error not allowed for char array
  //*************************************************************************************************** */
  strcpy(name2, "ahmad");
  cout << name2 << endl;
  char family[100];

  cin.getline(family, 99); // for char array (read a line of input into family, max 99 characters) deferent by cin.getline(family, 99) for string

  cout << family << endl;

  int p = strcmp(name2, family); // if name2 > family return 1, if name2 < family return -1, if name2 == family return 0*********************************
  cout << p << endl;
  cout << strcat(name2, family) << endl; // concatenate name2 and family

  char *result = strstr(family, "ali");
  cout << "result= " << result << endl;
  cout << "position:" << result - family << endl;
  string s = "Hello Ali";
  cout << strstr(s.c_str(), "Ali"); // convert string to char array using c_str()*************************

  // cout<<endl;
  // cout<<endl;
  return 0;
}
