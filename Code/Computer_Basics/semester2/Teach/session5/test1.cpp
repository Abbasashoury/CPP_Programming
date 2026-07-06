#include <iostream>
using namespace std;

void hello();

int main(){
    hello();
    return 0;
}

void hello(){
    string name;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Hello "<<name<<endl;
}