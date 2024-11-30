#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array:";
    cin >> n;

    int arr[n];
    cout << "Ab" << n << "elements dalne padenge";
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Printing the generated array
    int j;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (j = 0; j < size; j++)
    {
        cout << arr[j];
    }
}