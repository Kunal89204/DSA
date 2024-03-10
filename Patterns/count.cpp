#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    int count;
    count = 1;

    while (i <= n)
    {
        int j;
        j = 1;

        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}