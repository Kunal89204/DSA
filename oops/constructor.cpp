#include <iostream>
#include <string>

using namespace std;

class Teacher
{

public:
    Teacher()
    {
        cout << "Hi i am constuctor";
    }
    
    string name = "Kunal";
    string dept;

    // Setter
    void setSalary(int s)
    {
        salary = s;
    }

    // Getter
    void printSalary()
    {
        cout << salary;
    }

private:
    double salary;
};

int main()
{
    Teacher t1;
    // t1.name = "kanji";
    t1.setSalary(2000);
    cout << t1.name;
    t1.printSalary();
}