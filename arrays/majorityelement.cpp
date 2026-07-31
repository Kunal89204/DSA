#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int majorityElement(const vector<int> &nums)
{
    unordered_map<int, int> elements;

    for (int el : nums)
    {
        elements[el]++;

        if (elements[el] > nums.size() / 2)
        {
            return el;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 4};
    majorityElement(nums);
    
}