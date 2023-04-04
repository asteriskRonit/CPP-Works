#include<iostream>
#include<string>
using namespace std;
template<class u,class v>
void print(u x,v b)
{
    cout<<"The value of the variable is : "<<x<<" "<<b;
    cout<<endl;
}
class B
{
    public:
    int a;
};
template<class d>
class A
{
    d e;
    public:
    void get(d x)
    {
       cout<<"output of class "<<x.a<<endl;
    }
};
int main()
{
    int a=10;
    print(10,'c');
    B b;
    b.a=100;
    A <B>c;
    c.get(b);
    return 0;
}