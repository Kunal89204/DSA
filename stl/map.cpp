#include <iostream>
#include <map>

using namespace std;


void twosu

int main()
{
    map<string, int> age;

    age["Kunal"] = 22;
    age["Rahul"] = 25;

    age.insert({"KMCP" ,234});
    cout << age["KMCP"];
}