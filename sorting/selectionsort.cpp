#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallestIdx] > arr[j])
            {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

int main()
{
    int arr[] = {4, 3, 5, 2, 7, 1, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    return 0;
}