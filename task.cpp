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
#include <iostream>
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