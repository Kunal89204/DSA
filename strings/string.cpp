
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Find the substring in this string.";
    string word = "substring";

    size_t pos = str.find(word);
    if (pos != string::npos)
        cout << "'" << word << "' found at position: " << pos << endl;
    else
        cout << "'" << word << "' not found." << endl;

    return 0;
}
