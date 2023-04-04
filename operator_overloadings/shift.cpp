#include<iostream>
#include<string.h>
using namespace std;
class A
{
    int a,b;
    public:
    A(int y,int u)
    {
        a=y;
        b=u;
    }
    int add()
    {
        return a+b;
    }
    int operator +(A x)
    {
        return (a+b+x.a+x.b);
    }
};
class B:public A
{
    int c,d;
    public:
    B(int t,int m)
    {
        
    }

}
int main()
{
     A s(1,2),x(2,3);
     cout<<"Addition "<<s+x<<"\n";
    return 0;
}