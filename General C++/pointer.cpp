#include<iostream>

using namespace std;

int main(){
    int a = 4;
    int b = 10;
    int *ptr2 = &b;
    int *ptr = &a;
    int sum = *ptr+*ptr2;
    int *sum2 = &sum;

    cout<<*sum2;
}