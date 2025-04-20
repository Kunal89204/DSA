#include <iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int> vec = {1,2,3,4,5};
    // cout<<vec[0];
    // // return 0 ; 

    vector <char> arr = {'a', 'b', 'c', 'd', 'e'};

    cout<<"Size is: "<< arr.size()<<endl;

    for(char val : arr){
        cout<<val<<endl;
    }

    return 0;
}

