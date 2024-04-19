#include <iostream>

using namespace std;

int main()
{
    int numbers[6];

    numbers[0] = 32530;
    numbers[1] = 345325;
    numbers[2] = 10332;
    numbers[3] = 10235;
    numbers[4] = 102;
    numbers[5] = 13;

    for (int i = 0; i < 6; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}