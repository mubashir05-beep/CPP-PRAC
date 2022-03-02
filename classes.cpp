#include <iostream>
using namespace std;
class syntex
{
    public:
    int age=18;
    string name="Mubashir";
    
};
class sum
{
    public:
    int a,b;
    int add( int a, int b);
};
int main()
{
    syntex S;
    cout<<"My name is "<<S.name<<endl;
    cout<<"My name Is "<<S.age<<endl ;
    sum s;
    cout<<"Enter 2 Numbers:"<<endl;
    cin>>s.a>>s.b;
    cout<<"Addition ="<<add(s.a,s.b);
    return 0;
}
int add(int a, int b)
{
    return a+b;
}

