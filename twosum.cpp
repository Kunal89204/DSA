#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(const vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 8, 10};
    int target = 18;

    vector<int> val = twoSum(arr, target);

    cout << val[0] << endl
         << val[1];
}