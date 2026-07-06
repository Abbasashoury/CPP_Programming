#include <iostream>
using namespace std;

float Pi();
void calc(float );
int main(){
    float r, S, P;
    cout<<"Enter the radius:";
    cin >>r;
    calc(r);
    return 0;
}
void calc(float r)
{
   float S = Pi() * r * r;
   float P = 2 * Pi() * r; 
   cout<<"S = " << S << " P = " << P;
}
float Pi(){
    return 3.14;
}