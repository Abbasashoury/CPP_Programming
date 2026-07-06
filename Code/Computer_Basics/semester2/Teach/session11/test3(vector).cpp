#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> numbers;
    numbers.push_back(10); // add item to vector
    numbers.push_back(20);
    numbers.push_back(30);
    cout << numbers.size() << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << " " << endl; // access to i-th item
    }

    numbers.insert(numbers.begin() + 1, 90); // insert 90 at second item
    cout << numbers.front() << endl;         // print first item
    numbers.erase(numbers.begin());          // erase first item

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << " " << endl; 
    }
    
    numbers.pop_back();                      // delete item from end

    numbers.clear();                         // clear vector

    return 0;
}

/*
int main()
{
    vector<int> numbers;

    cout << "enter 3 numbers   :" << endl;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    cout << "size : " << numbers.size() << endl;

    cout << " items: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << " ";//**********
    }
    cout << endl;

    for (int i : numbers)//***********
        cout << i << " ";
    cout << endl;

    numbers.insert(numbers.begin(), 100);
    numbers.erase(numbers.begin() + 1);
    cout << "after delete secon item ";
    for (int x : numbers)
        cout << x << " ";
    cout << endl;

    cout << "first item : " << numbers.front() << endl;
    cout << " last item: " << numbers.back() << endl;

    numbers.clear();
    cout << "  vector size after Clear  : " << numbers.size() << endl;

    return 0;
}

*/