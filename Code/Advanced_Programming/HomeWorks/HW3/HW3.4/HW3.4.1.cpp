#include <iostream>
using namespace std;

class Counter
{
    int count;

public:
    Counter() : count(0) {}

    Counter &operator++()
    {
        count++;
        return *this;
    }

    Counter operator++(int)
    {
        Counter temp = *this;
        count++;
        return temp;
    }

    friend ostream &operator<<(ostream &out, const Counter &c);
};

ostream &operator<<(ostream &out, const Counter &c)
{
    out << c.count;
    return out;
}