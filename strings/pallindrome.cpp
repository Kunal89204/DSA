#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str = "Kunal";

    int st = 0;
    int end = str.length() - 1;

    while (st < end)
    {
        while (left < right && !isalpha(str[st]))
        {
            st++;
        }

        while (left < right && !isalpha(str[end]))
        {
            end--;
        }

        if (str[st] != str[end])
        {
            cout << "Not a pallindrom";
            break;
        }

        st++;
        end--;
    }

    cout << "Palindrome";
}