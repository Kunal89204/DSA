#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector <int> vec = {1,2,3,4,5,6,7,8,9};
    cout<<vec.size()<<endl;
    cout<<vec.at(4)<<endl;
    vec.pop_back();
    vec.push_back(10);
    cout<<vec.back();


    for(int i : vec){
        cout<<i<<endl;
    }
    return 0;
}