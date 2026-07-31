#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;

    int arr[5] = {1,2,3,4,5};

    int* p = arr;

    cout<<p;
 
    return 0;
}