#include <iostream>

using namespace std;

int main()
{
    // int age;

    // cout << "enter your age:";
    // cin >> age;

    // if (age < 18)
    // {
    //     cout << "You can't drive";
    // }
    // else
    // {
    //     cout << "You can drive";
    // }

    int n;
    cin >> n;

    int i = 0;

    while (i <= n)
    {
        int j;
        j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }

     
        cout<<endl;
        

        i++;
    }

    return 0;
}