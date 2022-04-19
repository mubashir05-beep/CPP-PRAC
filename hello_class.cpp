#include<iostream>
using namespace std;
class Student{
          private://can be accessed by function.
          string name="Wahab";
          int age=20;
          public:
          void details(int a,int){//member fucntion/method.
              cout<<"NAme is "<<name<<endl;
              cout<<"AGE IS :"<<age<<endl;
          }
};
int main ()
{
  Student obj1;
  obj1.details();
}