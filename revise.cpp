#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[] = {3, 234, 43, 6, 5, 654, 754, 45, 43, 5, 634, 63};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Optional: validate n
    if(n > size) {
        cout << "Input exceeds array size.\n";
        return 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int el = 0; el < n; el++)
    {
        cout << arr[el] << " ";
    }

    return 0;
}
