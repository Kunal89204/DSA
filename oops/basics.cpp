#include <iostream>
#include <string>

using namespace std;

class Teacher
{
public:
    string name;
    string batch;

    Teacher()
    {
        cout << "I ran first, rest later" << endl;
    }

    // Get salary
    double returnSalary()
    {
        return salary;
    }

    // Set Salary
    void setSalary(double s)
    {
        this->salary = s;
    }

private:
    double salary;
};

int main()
{
    Teacher t1;
    t1.setSalary(20000);
    cout << t1.returnSalary();
}