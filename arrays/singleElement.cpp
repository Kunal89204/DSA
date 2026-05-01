#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &arr)
{

    for (int i = 1; i < arr.size() - 1; i++)
    {
        // first element unique
        if (arr[0] != arr[1])
            return 0;

        // last element unique
        if (arr[i - 1] != arr[i - 2])
            return i - 1;

        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
        {
            return i;
        }
    }
}

int main()
{
    vector<int> vec = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7};
    int val = linearSearch(vec);
    cout << vec[val];
}