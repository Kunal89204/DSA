#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {4, 3, 5, 2, 7, 1, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}