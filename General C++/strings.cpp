#include<iostream>
#include<string>

using namespace std;

int main(){
    string greeting = "hello world";

    cout<<"String:"<<greeting<<endl;
    cout<<"Character at index 7:"<< greeting[7]<<endl;
    greeting += "Welcome to c++!";
    cout<<greeting;
    return 0;
}