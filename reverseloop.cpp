#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};

    for(int i = nums.size() - 1; i >= 0; i--){
        cout<<nums[i]<<endl;
    }
    return 0;
}