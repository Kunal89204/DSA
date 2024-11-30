#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100]; // Maximum size of stack

public:
    Stack() {
        top = -1; // Initialize stack as empty
    }

    void push(int x) {
        if (top >= 99) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    cout << "Top element: " << myStack.peek() << endl; // 20

    myStack.pop();
    cout << "Top element after popping: " << myStack.peek() << endl; // 10

    return 0;
}
