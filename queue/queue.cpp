#include<iostream>

using namespace std;

#define n 20;

class Queue{
    int* arr;
    int front;
    int back;

    public:
    Queue() {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back == n-1){
            cout<<"Queue is empty!"<<endl;
        }

        if(front == -1){
            front = 0;
        }

        back++;
        arr[back] = x;
    }

    void pop(){
        if(front == -1){
            cout<<"Queue is empty!"<<endl;
            return;
        }

        front++;
    }
};