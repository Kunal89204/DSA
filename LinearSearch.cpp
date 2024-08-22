#include<iostream>

using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i =0;i<size;i++){
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {324,34,435,46,766,7,67,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 46;

    int index = linearSearch(arr, size, target);

    if (index != -1)
    {
        cout<<"The element is found at index:"<<index;
    }else{
        cout<<"Element not found"<<endl;
    }
    
}