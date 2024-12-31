#include <iostream>
using namespace std;

#define n 20

class Queue {
    int* arr;
    int front;
    int back;

public:
    Queue() {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x) {
        if (back == n - 1) {
            cout << "Queue is full, can't push " << x << endl;
            return;
        }

        if (front == -1) {
            front = 0; // Initialize front on the first push
        }
        arr[++back] = x; // Increment back and insert value
    }

    void pop() {
        if (front == -1 || front > back) {
            cout << "Queue is empty, can't pop" << endl;
            return;
        }
        front++;
        if (front > back) {
            // Reset the queue if it becomes empty
            front = -1;
            back = -1;
        }
    }

    int peek() {
        if (front == -1 || front > back) {
            cout << "Queue is empty, can't peek" << endl;
            return -1; // Return an invalid value to indicate an error
        }
        return arr[front];
    }

    bool empty() {
        return front == -1 || front > back;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element is " << q.peek() << endl; // 10

    q.pop();
    cout << "Front element after pop is " << q.peek() << endl; // 20

    q.pop();
    q.pop();
    q.pop(); // Should indicate queue is empty

    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Yes

    return 0;
}
