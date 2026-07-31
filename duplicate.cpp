#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool duplicate(const vector<int>& nums){
   unordered_map<int, int> seen;

   for(int i = 0; i < nums.size(); i++){
    if(seen.find(nums[i]) != seen.end()){
        return true;
    }
    seen[nums[i]] = 1;
   }
   return false;
}

int main(){
    vector<int> vec = {1,2,3,4,4,5,6,7};

}