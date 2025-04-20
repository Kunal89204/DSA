#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 25;

    int targetIndex = binarySearch(arr, size, target);

    if (targetIndex == -1)
    {
        cout << "Target not found in the array";
    }

    cout << "The target is at index :" << targetIndex << " And the value is " << arr[targetIndex];
}