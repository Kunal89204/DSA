#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    };

    cout<<"the sum of all elements in the array is:"<<sum;
}