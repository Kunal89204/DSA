#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age)
        : Person(name, age)
    {
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
    }
};

int main()
{
    Student s1("Kunal", 22);
    s1.getInfo();

    return 0;
}