#include<iostream>
#include<climits>
using namespace std;

int main(){
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int largest = INT_MIN, secondLargest = INT_MIN;
    cout<<secondLargest<< "largest number is "<<largest<< endl;

    // for(int i =0; i<size;i++){
    //     if (numbers[i] > largest)
    //     {
            
    //     }
        
    // }
}