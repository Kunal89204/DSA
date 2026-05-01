#include <iostream>

using namespace std;

void isPrime(int n)
{
    if (n <= 1)
    {
        cout << "Not a prime number";
        return;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number";
            break;
        }
    }
    cout << "Its a prime number";
}

int main()
{
    isPrime(30);
    return 0;
}
