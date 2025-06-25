// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     for (int st = 0; st < arr.size() ; st++)
//     {
//         for (int end = 0; end < arr.size() ; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Max sub array


// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     int maxSum = INT8_MIN;

//     for (int start = 0; start < vec.size(); start++)
//     {
//         int currSum = 0;
//         for (int end = start; end < vec.size(); end++)
//         {
//             currSum += vec[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }
//     cout << "max sub array" << maxSum << endl;
// }



#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

int maxSubArray(const vector<int>& nums) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int val : nums) {
        currSum += val;
        if (currSum < 0) {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-3, -2, -5, -1};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
