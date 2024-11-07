#include<iostream>

using namespace std;

int main(){
    int numbers[] = {1,2,3,4,3,2,1};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int target = 2;
    int count = 0;

    for(int i=0; i<size; i++){
        if (numbers[i] == target)
        {
            count++;
        }
    }
    cout<<"The number "<<target<<" appears "<<count<<" times in the array."<<endl;
    return 0;

}