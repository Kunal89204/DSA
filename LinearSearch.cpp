#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 21, 5, 6, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "The index of the target value is " << i;
        }
    }
}