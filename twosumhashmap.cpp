#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (seen.find(complement) != seen.end())
        {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int target = 19;
}