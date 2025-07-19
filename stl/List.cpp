#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> l;
    deque<int> d;
    pair<int, int> P = {1, 5};

    cout << P.first << endl;
    cout << P.second << endl;

    l.push_back(1);
    l.push_back(2);

    d.push_back(1);
    d.push_back(2);

    for (int val : l)
    {
        cout << val << endl;
    }

    for (int deq : d)
    {
        cout << deq << endl;
    }
    cout << l.back();
}