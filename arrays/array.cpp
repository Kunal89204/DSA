#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {1, 5, 6, 7, 2, 3, 4};
    int maxElement = 0;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > maxElement)
        {
            maxElement = numbers[i];
        }
    }
    cout << "The maximum element in the array is: " << maxElement << endl;
}