#include <iostream>
#include<string.h>
using namespace std;
class BSSE_1
{
    public:
   string name;
   char grade;
   int roll_num;

};
int main()
{
   BSSE_1 sec;
   cout<<"Enter Your Name : "<<endl;
   getline(cin,sec.name);
   cout<<"Enter Your Grade : "<<endl;
   cin>>sec.grade;
   cout<<"Enter Your Roll Number : "<<endl;
   cin>>sec.roll_num;
   cout<<endl;
   cout<<"Roll Number : "<<sec.roll_num<<" Name : "<<sec.name<<" Grade is : "<<sec.grade<<endl;
}