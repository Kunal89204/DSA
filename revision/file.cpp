#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

vector<int> twosum(const vector<int> &nums, int target)
{
   unordered_map<int, int> seen;

   for(int i = 0; i < nums.size(); i++){
    int compliment = target = nums[i];

    if(seen.find(compliment) != seen.end()){
        return {seen[compliment], i};
    }

    seen[nums[i]] = i;
   }
   return {};
}

int main()
{
    vector<int> vec = {2, 11, 7, 15};
    int target = 9;
}