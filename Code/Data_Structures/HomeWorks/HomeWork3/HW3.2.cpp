#include <iostream>
using namespace std;

class MyQueue
{
private:
    int *arr;
    int frontIndex;
    int rearIndex;
    int capacity;
    int count;

    void resize()
    {
        int newCapacity = capacity * 2;
        int *newArr = new int[newCapacity];
        for (int i = 0; i < count; i++)
        {
            newArr[i] = arr[(frontIndex + i) % capacity];
        }
        delete[] arr;
        arr = newArr;
        frontIndex = 0;
        rearIndex = count;
        capacity = newCapacity;
    }

public:
    MyQueue()
    {
        capacity = 4;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = 0;
        count = 0;
    }

    ~MyQueue()
    {
        delete[] arr;
    }

    void enqueue(int value)
    {
        if (count == capacity)
        {
            resize();
        }
        arr[rearIndex] = value;
        rearIndex = (rearIndex + 1) % capacity;
        count++;
    }

    int dequeue()
    {
        if (is_empty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        int value = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return value;
    }

    int front()
    {
        if (is_empty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return arr[frontIndex];
    }

    int size()
    {
        return count;
    }

    bool is_empty()
    {
        return count == 0;
    }
};

int main()
{
    MyQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;

    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Front after dequeue: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;

    q.enqueue(40);
    q.enqueue(50);

    while (!q.is_empty())
    {
        cout << q.dequeue() << " ";
    }
    cout << endl
         << "dequeue from empty queue: " << endl;
    q.dequeue();

    return 0;
}