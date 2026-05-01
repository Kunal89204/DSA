#include <iostream>

using namespace std;

int bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size - i - 1; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != 1)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    int arr[] = {12, 34, 54, 65, 86, 79};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    // swapped array
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << endl;
    }
}