#include <iostream>
#include <vector>

using namespace std;

void maxProfit(const vector<int> &nums)
{
    int minValue = nums[0];
    int maxProfit = 0;
    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i] > minValue)
        {
            maxProfit = max(maxProfit, nums[i] - minValue)
        }
        minValue = min(nums[i], minValue);
    }

    return maxProfit;
}

int main()
{
    vector<int> vec = {7, 1, 3, 6, 4, 2};

    bestBuy(vec);

    // maxProfit(vec);
}