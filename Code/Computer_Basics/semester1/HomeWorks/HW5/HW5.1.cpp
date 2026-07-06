#include <iostream>

using namespace std;

int main() 
{
    int n;
    int Arr1[n], Arr2[n];

    cin >> n;

    for(int i = 0 ; i < n ; i++) 
    {
        cin >> Arr1[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        cin >> Arr2[i];
    }

    int largNum = -1;

    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < n ; j++) 
        {
            if(Arr1[i] == Arr2[j]) 
            {
                if(Arr1[i] > largNum) 
                {
                    largNum = Arr1[i];
                }
            }
        }
    }
    cout << largNum << endl;

    return 0;
}