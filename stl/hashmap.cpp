#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> twoSumMap(const vector<int> &nums, int target)
{
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++)
    {

        int compliment = target - nums[i];

        if (seen.find(compliment) != seen.end())
        {
            return { seen[compliment], i };
        }

        seen[nums[i]] = i;
    }

    return {};
}

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 16;

    vector<int> vals = twoSumMap(nums, target);

    cout << vals[0];
    return 0;
}