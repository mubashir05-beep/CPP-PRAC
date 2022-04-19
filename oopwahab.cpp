#include<iostream>
using namespace std;
class noroz
{
    int x,y;
    private:
    friend void add(noroz k);
};
void add(noroz k)
{
    k.x=1;
    k.y=20;
    int sum;
    sum=k.x+k.y;
    cout<<"sum is"<<sum<<endl;
}
int main()
{
    noroz s;
    add(s);
    return 0;
}