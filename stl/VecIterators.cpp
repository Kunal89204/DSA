#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {4, 5}};
    pair<int, pair<int, int>> p = {3, {4, 5}};

    cout << p.first << endl;
    cout << p.second.second << endl;

    for (pair<int, int> x : vec)
    {
        cout << x.first << endl;
    }
}
