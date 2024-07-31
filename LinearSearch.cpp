#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target)
{

    for (int i=0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {23, 5, 435, 5, 6, 47, 567, 65, 86, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 47;

    int index = linearSearch(arr, size, target);

     if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    
    
}