#include<iostream>

using namespace std;

class Stack {
    int top;
    int arr[100];

    public:
    Stack(){
        top=-1;
    }

    void push(int x){
        if(top>=99){
            cout<<"Stack overflowed :"<<x<<endl;
            return;
        }

        arr[++top] = x;
    }

    void pop(){
        if(top<=0){
            cout<<"Stack is empty :"<<top<<endl;
            return;
        }

        top--;
    }

    int peek(){
        if(top<=0){
            cout<<"Stack is empty :"<<top<<endl;
            return -1;
        }

        return arr[top];
    }


};



int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top element is : "<<s.peek()<<endl; //prints 30

    s.pop();
    cout<<"Top element is : "<<s.peek()<<endl; //prints 20
}