#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> &vec)
{
    cout << "Vector : ";
    for (int x : vec)
    {
        cout << x << endl;
    }
}

int main()
{
    vector<int> vec = {1};

    vec.push_back(10);
    vec.push_back(20);
    vec.pop_back();
    cout << vec.front() << endl;
    printVector(vec);
}