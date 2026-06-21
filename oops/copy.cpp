#include <iostream>

using namespace std;

class Student
{
public:
    int *marks;

    Student(int m)
    {
        marks = new int(m);
    }

    // Deep Copy Constructor
    Student(const Student &other)
    {
        marks = new int(*other.marks);
    }

    ~Student(){
        cout<<"I run when end";
    }
};

int main()
{
    Student s1(90);
    Student s2 = s1; // Shallow copy

    *s2.marks = 50;

    cout << *s1.marks; // 50

    delete s1.marks;
    delete s2.marks; // Crash (double delete)
}