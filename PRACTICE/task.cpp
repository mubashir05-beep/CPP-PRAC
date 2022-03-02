#include <iostream>
using namespace std;
class MyClass
{
    public:
    int age=18;
    string name="Mubashir";
    int Marks=1,Marks2=3;
    int sum(int a, int b);

};
int main()
{
MyClass mc;
cout<<"My age is"<<mc.age<<endl;
cout<<"My Name is"<<mc.name<<endl;
cout<<"Marks ="<<mc.sum(mc.Marks,mc.Marks2);

}
int MyClass::sum(int a, int b)
{
    return a+b;
}