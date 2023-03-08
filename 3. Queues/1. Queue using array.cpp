#include <iostream>
using namespace std;

template <typename T>

class Queue
{

    T *data;
    int size;
    int nextIndex;
    int firstIndex;
    int capacity;

public:
    Queue(int s)
    {
        size = 0;
        data = new T[size];
        nextIndex = 0;
        firstIndex = -1;
        capacity = s;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return (getSize() == 0);
    }
    void enqueue(T element)
    {
        if (getSize() == capacity)
        {
            cout << "Queue is full\n";
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % (capacity);

        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return 0;
        }
        return data[firstIndex];
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return 0;
        }
        T ans = data[nextIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;

        if (getSize() == 0)
        {
            nextIndex = 0;
            firstIndex = -1;
        }
        return ans;
    }
};

int main()
{

    Queue<int> q(3);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.front() << endl;
    cout << q.getSize() << endl;
    q.dequeue();
    q.enqueue(40);
    cout << q.front() << endl;

    q.dequeue();
    q.dequeue();
    cout << q.front() << endl;
    cout << q.getSize() << endl;

    return 0;
}
