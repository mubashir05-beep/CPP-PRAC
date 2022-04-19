#include<iostream>
using namespace std;
class unary{
public:
int a;
unary()
{
    a=0;
}
int operator ++()
{
return ++a;
}
int operator++(int)
{
    return a++;
}
int operator--()
{
    return --a;
}
int operator--(int)
{
    return a--;
}
};
int main()
{
    unary v,x;
    cout<<++v<<endl;
     cout<<v++<<endl;
    cout<<--v;
}