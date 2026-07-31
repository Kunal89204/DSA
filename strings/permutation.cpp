// Problem 567 Leetcode
#include <iostream>
#include <string>

using namespace std;

bool permutation(string s1, string s2)
{
    int freq[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int idx = s1[i] - 'a';
        freq[idx]++;
    }

    int windSize = s1.length();

    for (int i = 0; i < s2.length(); i++)
    {
        int windIdx = 0, idx = i;

        while(windIdx < windSize && idx < s2.length()){
             
        }
    }
}

int main()
{
    cout << "x" - "c";
}
