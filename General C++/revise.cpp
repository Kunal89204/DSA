#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if (n>10)
    {
    cout<<"the entered number is greater than 10";
    }else{
        cout<<"smaller than 10\n";
    }

    int *ptr = &n;
    cout<<"the memeory address of "<< n <<" is "<<ptr;
    
}