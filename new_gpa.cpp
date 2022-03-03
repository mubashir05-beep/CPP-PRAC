#include<iostream>
using namespace std;

class std_ifo
{
    public:
    string name;
    int age;
    int sub_num;
    char grade;
    double quality_point;
    string subject;
    double sum_qp=0.0;
    int sum_ch=0;
    int credit_hour(void)
    {
        cout<<"Enter Credit Hour : (1-5)"<<endl;
        int credit;
        cin>>credit;
        return credit;
    }
    
     

};
int main()
{
    std_ifo std;
    cout<<"Enter Your Name : "<<endl;
    getline(cin,std.name);
    cout<<"Enter Your Age : "<<endl;
    cin>>std.age;
    cout<<"Subjects : ";
    cin>>std.sub_num; 
    do
    {
    cout<<std.credit_hour()<<endl;
    cout<<"Enter Your GRADE : "<<endl;
    cin>>std.grade;
    switch(std.grade)
    {
        case 'A':
        {
            std.quality_point=std.credit_hour()*4;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'A-':
        {
            std.quality_point=std.credit_hour()*3.7;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'B+':
        {
            std.quality_point=std.credit_hour()*3.3;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'B':
        {
            std.quality_point=std.credit_hour()*3.0;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'B-':
        {
            std.quality_point=std.credit_hour()*2.7;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'C+':
        {
            std.quality_point=std.credit_hour()*2.3;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'C':
        {
            std.quality_point=std.credit_hour()*2.0;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'c-':
        {
            std.quality_point=std.credit_hour()*1.7;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'D+':
        {
            std.quality_point=std.credit_hour()*1.3;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'D':
        {
            std.quality_point=std.credit_hour()*1.0;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
        case 'F':
        {
            std.quality_point=std.credit_hour()*0.0;
            cout<<"Quality Points "<<std.quality_point;
            std.sum_qp=std.sum_qp+std.quality_point;
            break;
        }
     }


       std.sum_ch=std.sum_ch+std.credit_hour();
    } while (std.sub_num>0&&std.sub_num<=5);
    
    cout<<"TOTAL QUALLTY POINTS = "<<std.sum_qp<<endl;
    cout<<"TOTAL CREDIT HOURS = "<<std.sum_ch;
    cout<<"NAME : "<<std.name<<" AGE : "<<std.age<<" GPA : "<<std.sum_qp/std.sum_ch;
return 0;

}