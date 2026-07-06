#include <iostream>
#include <string>
using namespace std;
int main()
{
  /*initiliaze*/
  string s0;
  string s1 = "Computer";
  string s2("Computer");
  string s3{"Computer"};
  string s4{"Computer software"};
  string s5(5, 'X');
  string s6(s1, 0, 3); //***********

  cout << "s0: " << s0 << endl;
  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;
  cout << "s3: " << s3 << endl;
  cout << "s4: " << s4 << endl;
  cout << "s5: " << s5 << endl;
  cout << "s6: " << s6 << endl;

  /** length*/
  cout << "s0 length: " << s0.length() << endl;
  cout << "s1 length: " << s1.length() << endl;
  cout << "s4 length: " << s4.length() << endl;

  /**Comparision */
  cout << boolalpha; //*************** */

  cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
  cout << s1 << " == " << s4 << " : " << (s1 == s4) << endl;
  cout << s1 << " != " << s4 << " : " << (s1 != s4) << endl;
  cout << s1 << " > " << s4 << " : " << (s1 > s4) << endl;
  cout << s1 << " < " << s4 << " : " << (s1 < s4) << endl;

  /** [] at() */ //********************************

  cout << s3[0] << endl;
  cout << s3.at(0) << endl;
  s3[0] = 'B';
  cout << s3 << endl;

  /** + */

  s5 = s1 + " and " + s4; //***********
  cout << "s5: " << s5 << endl;

  /** Loop */

  for (int i = 0; i < s1.length(); i++)
    cout << s1[i];
  cout << endl;
  for (char c : s1) //***********************
    cout << c;
  cout << endl;

  /** substring */
  cout << s1.substr(0, 3) << endl; //***********
  cout << s1.substr(1, 3) << endl;
  cout << s1.substr(1) << endl; //*******
  cout << s1 << endl;

  /** erase */

  s6 = "My name is Ali";
  s6.erase(3, 4); //***********
  cout << s6 << endl;

  s6 = "My name is Amirali";
  s6.erase(3); //***********
  cout << s6 << endl;

  /**getline */
  
  getline(cin, s6);
  cout << s6 << endl;

  /** Find */

  s6 = "Hello Reza,How are you Reza?";
  int posa = s6.find("Reza"); //***********
  cout << posa << endl;

  posa = s6.find("Ali");
  cout << posa << endl;

  posa = s6.find("Reza", 10); //***********
  cout << posa << endl;

  /** Replace */
  s6.replace(posa, 3, 4, 'A'); //***********
  cout << s6 << endl;

  s6.replace(posa, 5, 3, 'A');
  cout << s6 << endl;

  s6.replace(posa, 4, "Ali"); //***********
  cout << s6 << endl;

  /** insert */
  s6 = "Computer Software";
  s6.insert(8, " Hardware and"); //**************** */
  cout << s6 << endl;

  return 0;
}