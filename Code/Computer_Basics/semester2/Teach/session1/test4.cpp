#include<iostream>
using namespace std;
int main()
{
    // overflow
    int a=1000;
    int b=a*1000;
    cout<<"B= "<<b<<endl;
    b=b*1000;
    cout<<"B= "<<b<<endl;
    b=b*1000;
    cout<<"B= "<<b<<endl;
    b=b*1000;
    cout<<"B= "<<b<<endl;
    return 0;
}