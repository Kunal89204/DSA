#include <iostream>
#include <vector>

vector<int> twoSum(const vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum == traget {
                return {start, end};
            })
            if (sum > target)
            {
                end--;
            }
            else
            {
                start++;
            }
    }

    return {};
}

int main()
{
    vector<int> arr = {2, 5, 6, 8, 11};
    int target = 14;

    vector<int> result = twoSum(arr, target);

    if (!result.empty())
    {
        cout << "Indices: "
             << result[0] << " "
             << result[1] << endl;
    }
}
