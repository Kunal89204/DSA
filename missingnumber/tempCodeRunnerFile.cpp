int sum(vector<int> &nums)
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
