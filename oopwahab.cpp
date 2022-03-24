#include<iostream>
using namespace std;
class Student
{
    
    public:
    string name="X.Y.Z";
    char mid_grade='B';
    char final_grade='B';
    char proj_grade='B';
};
int main()
{cout<<"Name : Muhammad Mubashir Munir Khan."<< "Arid No : 21-Arid-4853."<<endl;
    cout<<"-----------------------------------------------"<<endl;
    Student s;
    cout<<"Name : "<<s.name<<endl;
    cout<<"Mid Grade : "<<s.mid_grade<<endl;
    cout<<"Final Grade : "<<s.final_grade<<endl;
    cout<<"Project Grade : "<<s.proj_grade<<endl;
}