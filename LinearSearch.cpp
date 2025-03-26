#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    int i;

    for(i=0; i<size; i++){
        if (arr[i] == target){
            cout<<"The element is at index "<<i<<endl;
        }
        
    }
}