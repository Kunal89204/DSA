#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[] = "kunal";

    int st = 0;
    int end = 4;

    while (st < end)
    {
        swap(str[st], str[end]);
        st++;
        end--;
    }

    cout << str;
}
