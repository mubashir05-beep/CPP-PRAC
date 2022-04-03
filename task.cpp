/*#include <iostream>
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
}*/
/*#include <iostream>
using namespace std;
class library{
    public:
    static int book_id;
    char book[10];
    library(){
    book_id++;
    cout<<"Please Enter Book name: "<<endl;
    cin>>book;
    cout<<"Your Book ID is : "<<book_id<<endl;
   
    }
};
int main()
{
    library b1,b2,b3,b4;
     cout<<"The Total Books You Borrowed : "<<library::book_id<<endl;
}
#include<iostream>
using namespace std;
class bus
{
    public:
    static int seat_id;
    string name;
    string location_name;
    bus(){
cout<<"Enter Your name:"<<endl;
cin>>name;
cout<<"Enter Your location your going to :"<<endl;
cin>>location_name;
 seat_id++;
cout<<"Your Seast ID is "<<seat_id;
    }
};
int bus::seat_id=0;
int main()
{
    bus s1,s2,s3;
}
*/
#include<iostream>
using namespace std;
class area{
    public:
static  int a;
static int b;
static int c;
area(){
  //a++;
    b=b+2;
    c=c+3;
    cout<<"Runnning"<<endl;
}
// int a,int b, int c
static void display(){
    cout<<a<<b<<c<<endl;
}
static int sum(int a , int b , int c){
    return a+b+c;
}
};
int area::a=0;
int area::b=0;
int area::c=0;
int main(){
    area ob1;
   ob1.display();
   cout<<"Sum"<<area::sum(area::a,area::b,area::c);
//    cout<<ob1.sum(area::a,area::b,area::c);
}