#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool Anagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    unordered_map<char, int> freq;

    for (char ch : s)
    {
        freq[ch]++;
    }

    for (char ch : t)
    {
        freq[ch]--;
    }

    for (auto pair : freq)
    {
        if (pair.second != 0)
        {
            return false
        }
    }
    return true;
}

int main()
{
    string name = "Kunal";

    if (Anagram)
    {
        cout << "Is a anagram";
    }
    else
    {
        cout << "Not a anagram";
    }
    return 0;
}