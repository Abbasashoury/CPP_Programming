#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int gole, user_guess, no_try = 0;

    srand(time(0));
    gole = rand() % 1000 + 1;

    while (no_try++ < 10)
    {
        cout << "Enter your guess[1, 1000]:";
        cin >> user_guess;
        if (user_guess == gole)
        {
            break;
        }

        else if (user_guess > gole)
        {
            cout << "Enter a lower number";
        }
        else
        {
            cout << "Enter an upper number";
        }
    }
    if (no_try <= 10)
    {
        cout << "You win!" << "\nYour score is " << (10 - no_try) * 10 << " from 100";
    }
    else
    {
        cout << "The number was" << gole << "You loss!";
    }
    return 0;
}
/*

int main(){
    srand(time(0));
    for(int i=1;i<=10;i++)
    {
        cout<<rand()%6+1<<"\t";
        if(!(i%5))
        cout<<endl;
    }
    return 0;
}
*/