#include <iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int> vec = {1,2,3,4,5};
    // cout<<vec[0];
    // // return 0 ; 

    vector <char> arr = {'a', 'b', 'c', 'd', 'e'};

    // Size of a vector
    cout<<"Size is: "<< arr.size()<<endl;

    arr.push_back('2');

    arr.pop_back();


    cout<<arr.front();
    cout<<arr.at(3);


    for(char val : arr){
        cout<<val<<endl;
    }

    return 0;
}

