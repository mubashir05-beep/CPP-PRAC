#include <iostream>
using namespace std;
class SONY_TV{
private:
	float length;
	float width;
public:
SONY_TV(){
    length=12;
    width=32;
}
SONY_TV(int l, float w){
    length=l;
    width=w;
}
friend double calculate_area(SONY_TV s);
double price(){
    return calculate_area(*this)*100;
}

void show(){
    cout<<"Length is : "<<length<<endl;
    cout<<"Width is : "<<width<<endl;
    cout<<"Area is : "<<calculate_area(*this)<<endl;
    cout<<"PRICE IS : "<<price()<<endl;
}
};
double calculate_area(SONY_TV s){
    return s.length*s.width;
}
int main()
{
    SONY_TV t1;
    SONY_TV t2(4,5);
    SONY_TV t3(6, 7);
    t1.show();
    cout<<endl<<endl;
    t2.show();
    cout<<endl<<endl;
    t3.show();
}




