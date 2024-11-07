#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for(int i = 0; i<size ; i++){
        if (arr[i] == target)
        {
            return i;
        }

        
    }
        return -1;
    
}

int main()
{
    int arr[] = {1223, 34, 45, 65, 6, 545, 5, 435, 6, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 435;

    int index = linearSearch(arr, size, target);

    if (index == -1)
    {
        cout<<"element not found";
    }else{
        cout<<"Element found at index:"<<index<<endl;
    }
    
}