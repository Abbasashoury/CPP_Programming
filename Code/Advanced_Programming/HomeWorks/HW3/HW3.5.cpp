#include <iostream>
#include <string>

using namespace std;

class Distance
{
    int meter;

public:
    Distance(int m = 0) : meter(m) {}

    int getMeter() const
    {
        return meter;
    }

    Distance operator+(const Distance &other)
    {
        return Distance(this->meter + other.meter);
    }

    Distance operator+(int value)
    {
        return Distance(this->meter + value);
    }
};

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string op;
        int a, b;
        cin >> op >> a >> b;

        if (op == "DD")
        {
            Distance d1(a);
            Distance d2(b);

            Distance res = d1 + d2;

            cout << res.getMeter() << endl;
        }
        else if (op == "DI")
        {
            Distance d1(a);

            Distance res = d1 + b;

            cout << res.getMeter() << endl;
        }
    }

    return 0;
}