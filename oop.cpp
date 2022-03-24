/*
Program 1: Create a class named 'Teacher' with a string variable 'name' and an integer variable ‘ID’. 
Assign the value of ID as '2' and that of name as "Tayyaba " by creating an object of the class Teacher.
*/
#include<iostream>
using namespace std;
class teacher
{
    public:
    string name;
    int id;
};
int main()
{
    cout<<"-----------------------"<<endl;
    teacher t;
    t.name="Tayaba";
    t.id=2;
    cout<<"ID= "<<t.id<<". Name= "<<t.name<<endl;
    cout<<"-----------------------"<<endl;
}

/*
Program 2: Assign and print the ID, phone number and address of two teachers having names "Saira" and "Tayyaba" 
respectively by creating two objects of the class 'Teacher'.
*/

#include<iostream>
using namespace std;
class Teacher
{
    public:
    string name;
    int ID;
    string phone_number;
    string address;
};
int main()
{
    cout<<"-----------------------"<<endl;
     Teacher t1,t2;
     t1.name="Saira";
     t1.ID=3;
     t1.address="A B C ETC";
     t1.phone_number="0000000000";
     cout<<"Teacher 1 : "<<endl;
     cout<<"-----------------------"<<endl;
     cout<<"Name : "<<t1.name<<". ID : "<<t1.ID<<". Address : "<<t1.address<<". Phone Number : "<<t1.phone_number<<endl;
cout<<"-----------------------"<<endl;
     t2.name="Tayyaba";
     t2.ID=2;
     t2.address="A B C ETC";
     st2.phone_number="00000000000";
     cout<<"Teacher 2 : "<<endl;
     cout<<"-----------------------"<<endl;
     cout<<"Name : "<<t2.name<<". ID : "<<t2.ID<<". Address : "<<t2.address<<". Phone Number : "<<t2.phone_number<<endl;
     cout<<"-----------------------"<<endl;
}
*/
/*

Program 3: Write a program to print the area and perimeter of a triangle having sides of 3, 4
 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.

*/
#include<iostream>
#include<math.h> 
using namespace std;

class Area
{
    public:
    void area(int a, int b, int c)
    {
        float s=(a+b+c)/2;
        float A=sqrt(s*(a-s)*(b-s)*(c-s));
        cout<<"Area : "<<A<<endl;

    }
    void perimeter(int a , int b, int c)
    {
        cout<<"Perimeter : "<<a+b+c<<endl;
    }
};
 
int main()
{
    
    Area a;
    int a=3,b=4,c=5;
    a.area(a,b,c); 
    a.perimeter(a,b,c);
    
}

/*
#include<iostream>
using namespace std;
class Area
{
    public:
    float length;
    float breadth;
    void Dimension(float a , float b) 
    {
        
       length=a;
       
       breadth=b;
    }
   void area_rect(void)
    {
        cout<<"Area Of Rectangle is : "<<length*breadth;
    }
};
int main()
{
    float a,b;
    Area a1;
    cout<<"Enter Length : "<<endl;
    cin>>a;
    cout<<"Enter Breadth(width) : "<<endl;
    cin>>b;
a1.Dimension(a,b);
a1.area_rect();
}

*/
/*
Program 4: 
Write a program to print the volume of a box by creating a class named 
'Volume' with an initialization list to initialize its length, breadth and height.
*/

#include<iostream>
using namespace std;
class volumee
{
    public:
    float length=4, width=4,height=4;
};
int main()
{
    volumee v;
    
   float V=v.length*v.breadth *v.height;
    cout<<"Volume is : "<<V<<endl;
   



}


/*
Program 5:
Suppose we want to keep track of students taking a course. Each student will have a name, a midterm grade,
 a final grade, and a course project grade. These grades will be used to compute a final course grade.
*/

#include<iostream>
using namespace std;
class Student
{
    
    public:
    string name="ANY";
    char mid_grade='A';
    char final_grade='B';
    char proj_grade='C';
};
int main()
{
    Student s;
    cout<<"Name : "<<s.name<<endl;
    cout<<"Mid Grade : "<<s.mid_grade<<endl;
    cout<<"Final Grade : "<<s.final_grade<<endl;
    cout<<"Project Grade : "<<s.proj_grade<<endl;
}
/*
Program 7: add two distances in inch and convert into feet by creating a class named 'Distance'.
*/
/*
#include<iostream>
using namespace std;
class Distantances
{
public:
float inches;
float sum;
};
int main()
{
    Distantances d1,d2,total;
    cout<<"Name : Muhammad Mubashir Munir Khan."<< "Arid No : 21-Arid-4853."<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Enter 1st Distance (In Inches): "<<endl;
    cin>>d1.inches;
    cout<<"Enter 2nd Distance : "<<endl;
    cin>>d2.inches;
    total.sum=d1.inches+d2.inches;
    cout<<"Sum in Inches (In Inches): "<<total.sum<<endl;
    cout<<"Total Sum In Feet : " <<total.sum/12<<endl;
}
*/
