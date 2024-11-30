#include <iostream>
#include<string>

using namespace std;

class Employee
{
public:
    string name;
    int salary;
    string someText(){
        return this->name;
    }
    int func(int a)
    {
        return a;
    }

    Employee(string name, int salaray){
        this->name = name;
        this->salary = salary;
    }
};

int main()
{
    Employee har;
    har.name = "harry";
    har.salary = 1090;

    cout << "the name is :" << har.someText();
}
