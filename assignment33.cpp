
#include<iostream>
using namespace std;

class employeeInfo{
    protected:
    string name="ALi";
    int ID=32;
char gender[10]="Male";
string departName;
string occupation;
public:
employeeInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Emp. ID: "<<ID<<endl;
    cout<<"Gender: "<<gender<<endl;
}
void getDeptInfo(){
    cout<<"Enter Department Name: "<<endl;
cin>>departName;
cout<<"Enter OCcupation: "<<endl;
cin>>occupation;
}
void HOD(){
    cout<<"Base Class"<<endl;
}
};
class departmentDetail:public employeeInfo{
public:
void getEmployerrInfo(){
    cout<<"Enter Your Name"<<endl;
    cin>>name;
    cout<<"Enter Your EMP. ID : "<<endl;
    cin>>ID;
    cout<<"Enter Your Gender"<<endl;
    cin>>gender;
}
void printEmployeeInfo(){
     cout<<"Name : "<<name<<endl;
    cout<<"Emp. ID: "<<ID<<endl;
    cout<<"Gender: "<<gender<<endl;
}
void HOD(){
    cout<<"Derived Class"<<endl;
    employeeInfo::HOD();
}
};
int main()
{
    departmentDetail d1;
    // d1.getDeptInfo();
    // d1.getEmployerrInfo();
    // d1.printEmployeeInfo();
    d1.HOD();
    d1.employeeInfo::HOD();
}