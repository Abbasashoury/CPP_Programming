#include <iostream>
#include <vector>

using namespace std;

class CircularQueue
{
private:
    vector<int> queue;
    int frontIndex;
    int rearIndex;
    int currentSize;
    int capacity;

public:
    CircularQueue(int k)
    {
        capacity = k;
        queue.resize(k);
        frontIndex = 0;
        rearIndex = -1;
        currentSize = 0;
    }

    int front()
    {
        if (is_empty())
        {
            return -1;
        }
        return queue[frontIndex];
    }

    int rear()
    {
        if (is_empty())
        {
            return -1;
        }
        return queue[rearIndex];
    }

    bool enqueue(int value)
    {
        if (is_full())
        {
            return false;
        }

        rearIndex = (rearIndex + 1) % capacity;
        queue[rearIndex] = value;
        currentSize++;
        return true;
    }

    bool dequeue()
    {
        if (is_empty())
        {
            return false;
        }

        frontIndex = (frontIndex + 1) % capacity;
        currentSize--;

        if (is_empty())
        {
            rearIndex = -1;
            frontIndex = 0;
        }

        return true;
    }

    bool is_empty()
    {
        return currentSize == 0;
    }

    bool is_full()
    {
        return currentSize == capacity;
    }
};

int main()
{
    CircularQueue q(5);

    cout << "enqueue(1): " << (q.enqueue(1) ? "true" : "false") << endl;
    cout << "enqueue(2): " << (q.enqueue(2) ? "true" : "false") << endl;
    cout << "enqueue(3): " << (q.enqueue(3) ? "true" : "false") << endl;
    cout << "enqueue(4): " << (q.enqueue(4) ? "true" : "false") << endl;
    cout << "enqueue(5): " << (q.enqueue(5) ? "true" : "false") << endl;

    cout << "enqueue(6): " << (q.enqueue(6) ? "true" : "false") << endl;

    cout << "front(): " << q.front() << endl;
    cout << "rear(): " << q.rear() << endl;

    cout << "dequeue(): " << (q.dequeue() ? "true" : "false") << endl;

    cout << "enqueue(6): " << (q.enqueue(6) ? "true" : "false") << endl;

    cout << "front(): " << q.front() << endl;
    cout << "rear(): " << q.rear() << endl;

    return 0;
}