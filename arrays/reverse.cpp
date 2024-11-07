#include<iostream>

using namespace std;

int main(){
    int numbers[]= {0,1,2,3,4,5,6,7};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int reversedarr[size];

    for(int i = size-1; i>=0; i--){
        reversedarr[size-i-1] = numbers[i];
    }

    // printing the array
    for(int i = 0; i<size; i++){
        cout<<reversedarr[i]<<" ";
    }
}
