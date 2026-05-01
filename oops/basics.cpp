#include <iostream>
#include <string>

using namespace std;

class Teacher
{    
    // properties
private:
    string name;
    double salary;
    string subject;

    void printName()
    {
        cout << this->name;
    }

public:
    string department;

    // methods
public:
    void changeDepartment(string newDep)
    {
        department = newDep;
    }
};

int main()
{
    Teacher t1;
    t1.changeDepartment("Kanji");
    cout << t1.department;

    return 0;
}