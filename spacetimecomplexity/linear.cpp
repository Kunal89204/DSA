#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 8;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            cout << i << endl;
        }
    }
}