#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1,1,2,2,3,3,4,4,5,6,6,7,7};
    int size = vec.size();
    int elIndex = 0;

    for(int val: vec){
        elIndex = elIndex^val;
    }

    return elIndex;
    
}