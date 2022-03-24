#include <iostream>
using namespace std;
int main()
{
    int  unit;
    double ut1,ut2,ut3,ut4;
   double tax1,tax2,tax3,tax4;
    
    cout<<"Please Enter your units : "<<endl;
    cin>>unit;
    if(unit>=1&&unit<=100)
    {
    ut1=unit*7;
    cout<<"Bill amount(PKR/Rs) without Taxes is : "<<ut1<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Following Taxes are being applied."<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"1) GST = 45 Rs. \n2) TV FEE = 38 RS. \n3) Surcharge 65 Rs."<<endl;
    cout<<"-------------------------------"<<endl;
    tax1=ut1+45+38+65;
    cout<<"Total Bill With Taxes(PKR/Rs) : "<<tax1<<endl;
     cout<<"-------------------------------"<<endl;
    }
    else if(unit>=101&&unit<=200)
    {
        ut2=unit*8.5;
    cout<<"Bill amount(PKR/Rs) without Taxes is : "<<ut2<<endl;
    cout<<"Following Taxes are being applied."<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"1) GST = 45 Rs. \n2) TV FEE = 38 RS. \n3) Surcharge = 65 Rs."<<endl;
    cout<<"-------------------------------"<<endl;
    tax2=ut2+45+38+65;
    cout<<"Total Bill With Taxes(PKR/Rs) : "<<tax2<<endl;
    cout<<"-------------------------------"<<endl;
    }
     else if(unit>=201&&unit<=300)
    {
        ut3=unit*9.7;
    cout<<"Bill amount(PKR/Rs) without Taxes is : "<<ut3<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Following Taxes are being applied."<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"1) GST = 45 Rs. \n2) TV FEE = 38 RS. \n3) Surcharge = 65 Rs."<<endl;
    cout<<"-------------------------------"<<endl;
    tax3=ut3+45+38+65;
    cout<<"Total Bill With Taxes(PKR/Rs) : "<<tax3<<endl;
     cout<<"-------------------------------"<<endl;
    }
     else if(unit>=301)
    {
       ut4=unit*13.2;
    cout<<"Bill amount(PKR/Rs) without Taxes is : "<<ut4<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Following Taxes are being applied."<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"1) GST = 45 Rs. \n2) TV FEE = 38 RS. \n3) Surcharge = 65 Rs."<<endl;
    cout<<"-------------------------------"<<endl;
    tax4=ut4+45+38+65;
    cout<<"Total Bill With Taxes(PKR/Rs) : "<<tax4<<endl;
     cout<<"-------------------------------"<<endl;
    }
    else {
        cout<<"Please Enter units above 1 or equal to 1. "<<endl;
    }
    return 0;
}