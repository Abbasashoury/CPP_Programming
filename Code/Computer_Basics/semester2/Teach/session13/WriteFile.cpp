#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("example.txt", ios::app);
    // ios::app yani har chi benevisi, be akhar file ezafe mishe va data ghabli hazf nemishe.
    // In model """ofstream file file.open("example.txt",ios::app)"""" file ro ham sakhte ham baz mikone mesl """ofstream file("example.txt" ,ios::app)"""";
    //  fstream file file.open("example.txt",ios::in) ios::in (default for ifstream) ios::out (default for ofstream) ios::trunc (default for ofstream)
    // ios::app (append)
    if (!file.is_open())
    {
        cout << "Error in open file!" << endl;
        return 1;
    }

    file << "First file in C++" << endl;
    file << "This is a text file." << endl;

    file.close();
    cout << " Information Write to file Successfully ." << endl;
    return 0;
}
