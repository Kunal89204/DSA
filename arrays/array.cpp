#include <iostream>

using namespace std;

int main()
{
    int arr[] = {6,56,436,57,436,67,346,658,34,476,89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxI = 0;

    int i;
    for (i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxI])
        {
            maxI = i;
        }
    }

    cout<<"The largest element is :"<<arr[maxI]<<endl;
}