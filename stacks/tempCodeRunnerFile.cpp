#include<iostream>

using namespace std;

class Stack {
    int top;
    int arr[100];

    public:
    Stack(){
        top = -1;
    }

    void push(int x){
        if(top>=99){
            cout<<"Stack overflowed :"<<x<<endl;
            return;
        }

        arr[++top] = x;
    }


    int peek(){
        if(top<0){
            cout<<"Stack is empty :"<<top<<endl;
            return -1;
        }
        return arr[top];
    }


    void pop(){
        if(top<0){
            cout<<"Stack is  :"<<top<<endl;
        }

        arr[--top];
    }
};


int main (){
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    cout<<"Top element is : "<<stack.peek()<<endl;
}