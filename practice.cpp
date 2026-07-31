#include <iostream>
#include <vector>

using namespace std;

int rotatedSearch(const vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[left] <= nums[mid])
        {
            if (nums[left] <= target && target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> vec = {4, 5, 6, 7, 6, 2};

    int left = 0;
    int right = vec.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (vec[mid] > vec[mid - 1] && vec[mid] > vec[mid + 1])
        {
            return mid;
        }

        if (vec[mid] > vec[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // vector<int> vec = {4, 5, 6, 7, 0, 1, 2, 3};
    // int target = 2;

    // int targetIndex = rotatedSearch(vec, target);

    // if (targetIndex == -1)
    // {
    //     cout << "Target Not Found" << endl;
    // }
    // else
    // {
    //     cout << "Target is at index " << targetIndex << endl;
    // }
}
