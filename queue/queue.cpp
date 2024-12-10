#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> myq;

    myq.push(10);
    myq.push(20);
    myq.push(30);
    myq.push(40);

    myq.pop();
    cout<<myq.front()<<endl;
}
