#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (target < arr[mid])
        {
            right = mid - 1;
        }
        else if (target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            return mid; // Return the index if found
        }
    }

    return -1; // Return -1 if not found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int index = binarySearch(arr, size, target);

    cout << index << endl;

    return 0;
}
