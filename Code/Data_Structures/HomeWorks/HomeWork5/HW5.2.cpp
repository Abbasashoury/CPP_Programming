#include <iostream>
#include <vector>

using namespace std;

class MaxHeap
{
private:
    vector<int> heap;

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    int left(int i)
    {
        return 2 * i + 1;
    }

    int right(int i)
    {
        return 2 * i + 2;
    }

    void heapifyDown(int i)
    {
        int n = heap.size();
        int largest = i;
        int l = left(i);
        int r = right(i);

        if (l < n && heap[l] > heap[largest])
            largest = l;

        if (r < n && heap[r] > heap[largest])
            largest = r;

        if (largest != i)
        {
            swap(heap[i], heap[largest]);
            heapifyDown(largest);
        }
    }

    void heapifyUp(int i)
    {
        while (i > 0 && heap[parent(i)] < heap[i])
        {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

public:
    MaxHeap(const vector<int> &arr)
    {
        heap = arr;
        for (int i = (int)heap.size() / 2 - 1; i >= 0; --i)
        {
            heapifyDown(i);
        }
    }

    void printHeap()
    {
        cout << "[ ";
        for (int x : heap)
            cout << x << " ";
        cout << "]\n";
    }

    void insert(int value)
    {
        heap.push_back(value);
        heapifyUp((int)heap.size() - 1);
    }

    int search(int value)
    {
        for (int i = 0; i < (int)heap.size(); ++i)
        {
            if (heap[i] == value)
                return i;
        }
        return -1;
    }

    bool deleteValue(int value)
    {
        int idx = search(value);
        if (idx == -1)
            return false;

        int last = (int)heap.size() - 1;
        swap(heap[idx], heap[last]);
        heap.pop_back();

        if (idx < (int)heap.size())
        {
            if (idx > 0 && heap[idx] > heap[parent(idx)])
            {
                heapifyUp(idx);
            }
            else
            {
                heapifyDown(idx);
            }
        }
        return true;
    }

    int minimum()
    {
        if (heap.empty())
        {
            throw runtime_error("Heap is empty");
        }

        int n = heap.size();
        int start = n / 2;
        int mn = heap[start];

        for (int i = start + 1; i < n; ++i)
        {
            mn = min(mn, heap[i]);
        }
        return mn;
    }

    int maximum()
    {
        if (heap.empty())
        {
            throw runtime_error("Heap is empty");
        }
        return heap[0];
    }

    int size()
    {
        return (int)heap.size();
    }
};

int main()
{
    vector<int> arr = {10, 40, 20, 5, 6, 1, 8, 12, 15};

    cout << "Initial array:\n[ ";
    for (int x : arr)
        cout << x << " ";
    cout << "]\n\n";

    MaxHeap h(arr);

    cout << "Heap after constructor (heapify build):\n";
    h.printHeap();

    cout << "\nMaximum = " << h.maximum() << endl;
    cout << "Minimum = " << h.minimum() << endl;

    int key = 12;
    cout << "\nSearch " << key << ":\n";
    int idx = h.search(key);
    if (idx != -1)
        cout << key << " found at index " << idx << endl;
    else
        cout << key << " not found\n";

    cout << "\nInsert 50:\n";
    h.insert(50);
    h.printHeap();

    cout << "\nInsert 3:\n";
    h.insert(3);
    h.printHeap();

    cout << "\nDelete 40:\n";
    if (h.deleteValue(40))
    {
        cout << "40 deleted successfully\n";
    }
    else
    {
        cout << "40 not found\n";
    }
    h.printHeap();

    cout << "\nDelete 100:\n";
    if (h.deleteValue(100))
    {
        cout << "100 deleted successfully\n";
    }
    else
    {
        cout << "100 not found\n";
    }
    h.printHeap();

    cout << "\nFinal Maximum = " << h.maximum() << endl;
    cout << "Final Minimum = " << h.minimum() << endl;

    return 0;
}