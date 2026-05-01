#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }

        else
        {
            return mid;
        }
    }
}

int binarySearchRecursion(int arr[], int target, int start, int end)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return mid;
    if (arr[mid < target])
        return binarySearchRecursion(arr, target, mid + 1, end);
    return binarySearchRecursion(arr, target, start, mid - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int index = binarySearch(arr, size, target);

    cout << "The index is " << index;
}