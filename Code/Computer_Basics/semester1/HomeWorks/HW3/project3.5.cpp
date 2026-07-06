#include <iostream>
#include <cmath>

using namespace std;

float func1(float x)
{
    return ( x - floor(x) );
}

float func2(float x)
{
    return ( pow( x, 2 ) + x );
}

float func3(float x)
{
        return ( abs( - pow( x , 3 ) + 1 ) + pow( x , 3 ));
}

int main()
{
    int n;
    float x, y;
    bool Num1 = true, Num2 = true, Num3 = true;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        
        if ( abs( y - func1(x) ) > 0.2 )
            Num1 = false;
        if ( abs( y - func2(x) ) > 0.2 )
            Num2 = false;
        if ( abs( y - func3(x) ) > 0.2 )
            Num3 = false;
    }

    if (!Num1 && !Num2 && !Num3)
        cout << "No ones";

    else
    {
        if (Num1)
            cout << 1 << endl;
        if (Num2)
            cout << 2 << endl;
        if (Num3)
            cout << 3 << endl;
    }

    return 0;
}