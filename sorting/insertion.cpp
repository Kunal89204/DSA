#include <iostream>
#include <vector>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = i;
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main()
{
    int arr[] = {4, 3, 5, 2, 7, 1, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
}