#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write To File*****************************
    ofstream outFile("names.txt");
    outFile << "Ali" << endl;
    outFile << "Reza" << endl;
    outFile << "Hosssain" << endl;
    outFile.close();

    // Read  From File
    ifstream inFile("names.txt");
    string name;
    cout << "  Existing names in File :" << endl;
    while (getline(inFile, name)) {
        cout << name << endl;
    }
    inFile.close();

    return 0;
}
