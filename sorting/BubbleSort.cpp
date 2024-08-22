#include <iostream>

using namespace std;

void bubblesort(int arr[], int n)
{
    bool swapped;

    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    int arr[] = {3, 3, 235, 44, 6543, 5, 53, 53, 4, 53, 4253, 42};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);
    cout<<"Sorted array"<<endl;
    printArray(arr, n);
    return 0;
}