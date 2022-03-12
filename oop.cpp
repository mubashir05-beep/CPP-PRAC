/*
Program 1: Create a class named 'Teacher' with a string variable 'name' and an integer variable ‘ID’. 
Assign the value of ID as '2' and that of name as "Tayyaba " by creating an object of the class Teacher.

#include<iostream>
using namespace std;
class Teacher
{
    public:
    string name;
    int ID;
};
int main()
{
    cout<<"Name : Muhammad Mubashir Munir Khan."<< "Arid No : 21-Arid-4853."<<endl;
    cout<<"-----------------------------------------------"<<endl;
    Teacher t;
    t.name="Tayyaba";
    t.ID=2;
    cout<<"ID= "<<t.ID<<". Name= "<<t.name<<endl;
    cout<<"-----------------------------------------------"<<endl;
}
*/
/*
Program 2: Assign and print the ID, phone number and address of two teachers having names "Saira" and "Tayyaba" 
respectively by creating two objects of the class 'Teacher'.


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
    cout<<"Name : Muhammad Mubashir Munir Khan."<< "Arid No : 21-Arid-4853."<<endl;
    cout<<"-----------------------------------------------"<<endl;
     Teacher t1,t2;
     t1.name="Saira";
     t1.ID=3;
     t1.address="Sector # _, Street # _, House # _ (etc)";
     t1.phone_number="0000-0000000";
     cout<<"Teacher 1 : "<<endl;
     cout<<"-----------------------------------------------"<<endl;
     cout<<"Name : "<<t1.name<<". ID : "<<t1.ID<<". Address : "<<t1.address<<". Phone Number : "<<t1.phone_number<<endl;
     scout<<"-----------------------------------------------"<<endl;
     t2.name="Tayyaba";
     t2.ID=2;
     t2.address="Sector # _, Street # _, House # _ (etc)";
     st2.phone_number="0000-0000000";
     cout<<"Teacher 2 : "<<endl;
     cout<<"-----------------------------------------------"<<endl;
     cout<<"Name : "<<t2.name<<". ID : "<<t2.ID<<". Address : "<<t2.address<<". Phone Number : "<<t2.phone_number<<endl;
     cout<<"-----------------------------------------------"<<endl;
}
*/
/*

Program 3: Write a program to print the area and perimeter of a triangle having sides of 3, 4
 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.


#include<iostream>
#include<math.h> // For sqrt()
using namespace std;

class Area
{
    public:
    void area(int a, int b, int c)
    {
        float s=(a+b+c)/2;//semi_perimeter
        float ar=sqrt(s*(a-s)*(b-s)*(c-s));//using Heron's formula.
        cout<<"Area is : "<<a<<endl;

    }
    void perimeter(int a , int b, int c)
    {
        cout<<"Perimeter : "<<a+b+c<<endl;//Add All Sides
    }
};
 
int main()
{
     cout<<"Name : Muhammad Mubashir Munir Khan."<< "Arid No : 21-Arid-4853."<<endl;
    cout<<"-----------------------------------------------"<<endl;
    Area a;
    int side1=3,side2=4,side3=5;
    a.area(side1,side2,side3);
      cout<<"-----------------------------------------------"<<endl;
    a.perimeter(side1,side2,side3);
      cout<<"-----------------------------------------------"<<endl;

    
}
*/
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


#include<iostream>
using namespace std;
class Volume
{
    public:
 float length=4, breadth=4,height=4;
};
int main()
{
    Volume v;
    cout<<"Name : Muhammad Mubashir Munir Khan."<< "Arid No : 21-Arid-4853."<<endl;
    cout<<"-----------------------------------------------"<<endl;
   float vol=v.length*v.breadth *v.height;
    cout<<"Volume is : "<<vol<<endl;
    cout<<"-----------------------------------------------"<<endl;



}
*/

/*
Program 5:
Suppose we want to keep track of students taking a course. Each student will have a name, a midterm grade,
 a final grade, and a course project grade. These grades will be used to compute a final course grade.
*/
/*
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
}*/
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
