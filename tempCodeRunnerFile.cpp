#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT8_MAX;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }

        cout<<smallest;
    }


