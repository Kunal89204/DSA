#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
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
    int arr[] = {10, 20, 30, 40, 50, 60, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int index = linearSearch(arr, size, target);

    if (index != -1)
    {
        cout << "element found at index:" << index << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
}
