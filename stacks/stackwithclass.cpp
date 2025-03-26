#include <iostream>

using namespace std;

class Stack
{
    int top;
    int arr[100];

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top >= 99)
        {
            cout << "Stack overflow";
            return;
        }

        arr[++top] = x;
    }

    void pop(){
        if (top<0)
        {
            cout<<"Stack underflow";
            return;
        }

        top--;
    }

    int peek(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        }

        return arr[top];
    }


};

int main(){
    Stack mystack;

    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);
    mystack.push(50);

    cout<<mystack.peek();
}