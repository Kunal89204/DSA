#include <iostream>
#include <vector>
#include <chrono>
#include<algorithm>

using namespace std;
using namespace std::chrono;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k % = n;

    reverse
}

int main()
{
    auto start = high_resolution_clock::now();

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 1000000;
    rotate(nums, k);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Execution Time: "
         << duration.count()
         << " microseconds" << endl;
    return 0;
}