#include <iostream>

using namespace std;

int main()
{
    int arrSize;
    cout << "Please enter the size of the array:";
    cin >> arrSize;

    int arr[arrSize];

    int i;
    cout << "Ab dalo" << arrSize << "elementsa dame data type k";
    for (i = 0; i < arrSize; i++)
    {
        cout << "add element at index:" << i;
        cin >> arr[i];
    }

    int maxNumberIndex = 0;

    for ( i = 1; i < arrSize; i++)
    {
        if (arr[i] < arr[maxNumberIndex])
        {
            maxNumberIndex = i;
        }
        
    }

    cout<<"The largest element is at index"<<maxNumberIndex<<"and it value is :"<<arr[maxNumberIndex];
    

}