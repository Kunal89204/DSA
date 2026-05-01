#include <iostream>

using namespace std;

int main(){
    int len = 10;
    int first = 0, second = 1;

    for(int i = 0; i <= len; i++){
        cout<<first<<" ";
        int next = first + second;
        first = second;
        second = next;
    }
}