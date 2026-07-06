#include <iostream>
#include <string>

using namespace std;

class LogMessage
{
private:
    string msg;

public:
    LogMessage(const string &m) : msg(m) {}

    friend ostream &operator<<(ostream &os, const LogMessage &lm);
};

ostream &operator<<(ostream &os, const LogMessage &lm)
{
    os << "[LOG] " << lm.msg;
    return os;
}

int main()
{
    int Num;
    cin >> Num;
    cin.ignore();

    for (int i = 0; i < Num; ++i)
    {
        string message;
        getline(cin, message);
        LogMessage lm(message);
        cout << lm << '\n';
    }

    return 0;
}