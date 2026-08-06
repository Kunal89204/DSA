#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// int sum(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
// }

// int hashSet(vector<int> &nums)
// {
//     unordered_map<int, int> seen;

//     for (int num : nums)
//     {
//         seen.insert(num);
//     }

//     for (int i = 0; i <= nums.size(); i++)
//     {
//         if (seen.find(i) != seen.end())
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int sumType(vector<int> &nums)
// {
//     int sum = 0;
//     int targetSum = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         sum += nums[i];
//     }

//     int targetSum = n * (n + 1) / 2;

//     return targetSum - sum;
// }

void xors(vector<int> &nums)
{
    int ans = 0;
    int n = nums.size();

    for(int i = 0; i <= n; i++){
        ans ^= i;
    }

    for(int num: nums){
        ans ^= num;
    }

    return ans;

}

int main()
{
    vector<int> nums = {0, 1};

    xors(nums);
    return 0;
}