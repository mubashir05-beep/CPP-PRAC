#include <iostream>
using namespace std;
class Employee
{
    public:
    char name[10];
    static int id;
    Employee(){
        id++;
        cout<<"Enter Name of Employee : "<<endl;
        cin>>name;
        cout<<"Id no is : "<<id<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Enter New Employee record : "<<endl;
        cout<<"-------------------------"<<endl;
    }
};
int Employee::id=0;
int main()
{
  Employee e1,e2,e3,e4;
  cout<<"Total Number of Employes are : "<<Employee::id<<endl;
  cout<<"-------------------------"<<endl;
}