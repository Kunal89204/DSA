#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -2, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT8_MAX;
    cout<<smallest;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << smallest;

    return 0;
}