#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Size of the vector is" << " " << vec.size() << endl;

    // Looping through the vector
    for (int val : vec)
    {
        cout << val << endl;
    }

    // Modifiers
    vec.push_back(20);
    vec.pop_back();

    cout << vec.at(4) << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.data() << endl;
    cout << vec.empty() << endl;

    // Iterators
    vec.begin();
}