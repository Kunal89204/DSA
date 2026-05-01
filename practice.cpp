#include<iostream>
#include<string>

using namespace std;

 class Employee {
        public:
            string name;
            int salary;

            int addFunc(string name, int salary){
                this->name = name;
                this->salary = salary;
            }
    };

int main(){
   Employee kunal;

   cout<<kunal.name;
   kunal.addFunc("Kunal", 100);

}