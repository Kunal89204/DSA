#include <iostream>
#include <vector>

using namespace std;


int binarySearch(vector<int> arr, int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] < target)
        {
            left = mid + 1;
        }

        else if (arr[mid] > target)
        {
            right = mid - 1;
        }

        else
        {
            return mid;
        }
    }

    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = arr.size();
    int target = 6;


    int index2 = binarySearch(arr, size, target);

    cout << "The answer is " << index2;
}