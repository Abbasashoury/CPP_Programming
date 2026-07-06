#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SafeArray
{
private:
    static const int SIZE = 3;
    int data[SIZE];

public:
    SafeArray()
    {
        for (int i = 0; i < SIZE; ++i)
            data[i] = 0;
    }

    bool isValidIndex(int index) const
    {
        return index >= 0 && index < SIZE;
    }

    void setAt(int index, int value)
    {
        if (isValidIndex(index))
            data[index] = value;
    }

    int getAt(int index) const
    {
        if (isValidIndex(index))
            return data[index];
        return -1;
    }
};

int main()
{
    int Num;
    if (!(cin >> Num))
        return 0;

    SafeArray arr;

    for (int i = 0; i < Num; ++i)
    {
        string type;
        int index, value;

        if (!(cin >> type >> index >> value))
            break;

        if (type == "set")
            arr.setAt(index, value);
        else if (type == "get")
        {
            int result = arr.getAt(index);
            cout << result << endl;
        }
    }

    return 0;
}