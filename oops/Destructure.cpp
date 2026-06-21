#include <iostream>

using namespace std;

class Student
{
public:
    Student()
    {
        cout <<"I run first";
    }

    ~Student()
    {
        cout << "I run last";
    }
};

int main()
{
    Student s1;
}