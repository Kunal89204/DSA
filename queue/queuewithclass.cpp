#include <iostream>

using namespace std;

class Queue
{
    int front, rear, size;
    int arr[100];

public:
    Queue()
    {
        front = 0;
        rear = -1;
        size = 0;
    }

    void enqueue(int x)
    {
        if (size >= 100)
        {
            cout << "Queue Overflowed" << endl;
            return;
        }

        rear = (rear + 1) % 100;
        arr[rear] = x;
        size++;
    }
};

int main() {}