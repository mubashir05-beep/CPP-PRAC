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