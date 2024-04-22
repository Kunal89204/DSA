#include<iostream>

using namespace std;

int main (){


    int integer_array[10] = {1,2,3,4,5,56,6,6,4};

    int another_array[4];
    another_array[0] = 9;

    cout<<another_array[1]<<endl;;

    cout<<integer_array[4];
//  another way of changing the value of arrays
    *another_array = 29;

    int *ap = another_array;
    ap++;

    return 0;
}