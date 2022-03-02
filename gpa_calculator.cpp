#include <iostream>
#include<string.h>
using namespace std;
class GPA
{
public:
int credit_hours;
double num_grade;
double quality_point;

};
class STD_INFO
{
public:
string name;
char age;

};
int main()
{
    GPA gpa;
    STD_INFO st;
char grade;
cout<<"Enter Your Name :"<<endl;
getline(cin,st.name);
cout<<"Enter Your AGE : "<<endl;
cin>>st.age;
cout<<"Enter Credit hours : "<<endl;
cin>>gpa.credit_hours;
if(gpa.credit_hours=5)
{
cout<<"Enter your Grade (Uppercase) : "<<endl;
cin>>grade;
switch(grade)
{
    case 'A':

    {
      gpa.quality_point=gpa.credit_hours*4;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'A-':
    {
      gpa.quality_point=gpa.credit_hours*3.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B+':
    {
      gpa.quality_point=gpa.credit_hours*3.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B':
    {
      gpa.quality_point=gpa.credit_hours*3.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B-':
    {
      gpa.quality_point=gpa.credit_hours*2.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'C+':
    {
      gpa.quality_point=gpa.credit_hours*2.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C':
    {
      gpa.quality_point=gpa.credit_hours*2.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C-':
    {
      gpa.quality_point=gpa.credit_hours*1.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D+':
    {
      gpa.quality_point=gpa.credit_hours*1.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D':
    {
      gpa.quality_point=gpa.credit_hours*1.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'F':
    {
      gpa.quality_point=gpa.credit_hours*0.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
}

}
if(gpa.credit_hours=4)
{
cout<<"Enter your Grade (Uppercase) : "<<endl;
cin>>grade;
switch(grade)
{
    case 'A':

    {
      gpa.quality_point=gpa.credit_hours*4;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'A-':
    {
      gpa.quality_point=gpa.credit_hours*3.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B+':
    {
      gpa.quality_point=gpa.credit_hours*3.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B':
    {
      gpa.quality_point=gpa.credit_hours*3.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B-':
    {
      gpa.quality_point=gpa.credit_hours*2.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'C+':
    {
      gpa.quality_point=gpa.credit_hours*2.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C':
    {
      gpa.quality_point=gpa.credit_hours*2.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C-':
    {
      gpa.quality_point=gpa.credit_hours*1.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D+':
    {
      gpa.quality_point=gpa.credit_hours*1.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D':
    {
      gpa.quality_point=gpa.credit_hours*1.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'F':
    {
      gpa.quality_point=gpa.credit_hours*0.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
}

}
if(gpa.credit_hours=3)
{
cout<<"Enter your Grade (Uppercase) : "<<endl;
cin>>grade;
switch(grade)
{
    case 'A':

    {
      gpa.quality_point=gpa.credit_hours*4;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'A-':
    {
      gpa.quality_point=gpa.credit_hours*3.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B+':
    {
      gpa.quality_point=gpa.credit_hours*3.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B':
    {
      gpa.quality_point=gpa.credit_hours*3.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B-':
    {
      gpa.quality_point=gpa.credit_hours*2.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'C+':
    {
      gpa.quality_point=gpa.credit_hours*2.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C':
    {
      gpa.quality_point=gpa.credit_hours*2.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C-':
    {
      gpa.quality_point=gpa.credit_hours*1.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D+':
    {
      gpa.quality_point=gpa.credit_hours*1.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D':
    {
      gpa.quality_point=gpa.credit_hours*1.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'F':
    {
      gpa.quality_point=gpa.credit_hours*0.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
}

}
if(gpa.credit_hours=2)
{
cout<<"Enter your Grade (Uppercase) : "<<endl;
cin>>grade;
switch(grade)
{
    case 'A':

    {
      gpa.quality_point=gpa.credit_hours*4;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'A-':
    {
      gpa.quality_point=gpa.credit_hours*3.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B+':
    {
      gpa.quality_point=gpa.credit_hours*3.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B':
    {
      gpa.quality_point=gpa.credit_hours*3.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B-':
    {
      gpa.quality_point=gpa.credit_hours*2.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'C+':
    {
      gpa.quality_point=gpa.credit_hours*2.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C':
    {
      gpa.quality_point=gpa.credit_hours*2.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C-':
    {
      gpa.quality_point=gpa.credit_hours*1.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D+':
    {
      gpa.quality_point=gpa.credit_hours*1.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D':
    {
      gpa.quality_point=gpa.credit_hours*1.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'F':
    {
      gpa.quality_point=gpa.credit_hours*0.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
}

}
if(gpa.credit_hours=1)
{
cout<<"Enter your Grade (Uppercase) : "<<endl;
cin>>grade;
switch(grade)
{
    case 'A':

    {
      gpa.quality_point=gpa.credit_hours*4;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'A-':
    {
      gpa.quality_point=gpa.credit_hours*3.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B+':
    {
      gpa.quality_point=gpa.credit_hours*3.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B':
    {
      gpa.quality_point=gpa.credit_hours*3.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'B-':
    {
      gpa.quality_point=gpa.credit_hours*2.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
     case 'C+':
    {
      gpa.quality_point=gpa.credit_hours*2.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C':
    {
      gpa.quality_point=gpa.credit_hours*2.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'C-':
    {
      gpa.quality_point=gpa.credit_hours*1.7;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D+':
    {
      gpa.quality_point=gpa.credit_hours*1.3;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'D':
    {
      gpa.quality_point=gpa.credit_hours*1.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    } 
     case 'F':
    {
      gpa.quality_point=gpa.credit_hours*0.0;
      cout<<"Quality Points : "<<gpa.quality_point;
      break;
    }
}

}


} 
