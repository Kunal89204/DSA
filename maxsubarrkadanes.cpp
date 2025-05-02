#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < vec.size(); i++)
    {
        for (int end = i; end < vec.size(); end++)
        {
            for (int newNum = i; newNum <= end; newNum++)
            {
                cout << vec[newNum];
            }
            cout << endl;
        }
        cout << endl;
    }
}