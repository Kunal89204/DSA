#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    cout << "Top element: " << myStack.top() << endl;

    myStack.pop();
    cout << "After popping, top element: " << myStack.top() << endl; // 20

    if (myStack.empty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
}