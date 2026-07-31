#include <iostream>
#include <vector>

using namespace std;

void maxProfit(const vector<int> &nums)
{
    int minValue = nums[0];
    int maxProfit = 0;
    for (int i = 1; i < nums.size(); i++)
    {

        int cost = nums[i] - minValue;
        maxProfit = max(maxProfit, cost);
        minValue = min(minValue, nums[i]);
        cout << minValue;
    }
}

int main()
{
    vector<int> vec = {7, 1, 3, 6, 4, 2};

    maxProfit(vec);
}