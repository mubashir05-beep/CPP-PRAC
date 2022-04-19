#include <iostream>
using namespace std;
class SONY_TV{
public:
	float len;
	float wid;
SONY_TV(){
    len=2;
    wid=1;
}
SONY_TV(int l, float w){
    len=l;
    wid=w;
}
friend double cal_area(SONY_TV t);



double price(){
    return cal_area(*this)*100;
}

void show(){
    cout<<"Length is : "<<len<<endl;
    cout<<"Width is : "<<wid<<endl;
    cout<<"Area is : "<<cal_area(*this)<<endl;
    cout<<"PRICE IS : "<<price()<<endl;
}
};
double cal_area(SONY_TV t){
    return t.len*t.wid;
}
int main()
{
    SONY_TV t1;
    SONY_TV t2(4,4);
    SONY_TV t3(5,5);
    t1.show();
    cout<<endl<<endl;
    t2.show();
    cout<<endl<<endl;
    t3.show();
}




