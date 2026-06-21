#include <iostream>
#include <vector>

using namespace std;

void twoSum(const vector<int>& vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "Fist loop" << i << endl;
        for (int j = i + 1; j < vec.size(); j++)
        {
            cout << "Second loop" << j << endl;
            if (vec[i] + vec[j] == target)
            {
                cout << i << endl
                     << j << endl
                     << "And the value is gotcha" << vec[i] + vec[j];
                     return;
            }
            else
            {
                cout << "not found" << i << endl
                     << j << endl
                     << "And the value is" << vec[i] + vec[j];
                ;
                ;
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 67, 8};
    int target = 7;
    ;

    twoSum(arr, target);
}
