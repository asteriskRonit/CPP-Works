#include<iostream>
#include<string.h>
using namespace std;
class B
{
    public:
    float a,b,c;
    B(float l=0,float j=0,float m=0)
    {
        a=l;b=j;c=m;
    }
    void gett()
    {
        cout<<"first no = "<<a<<" second no = "<<b<<" Thisrd no = "<<c<<endl;
    }

    
};
class C
{
    float x,y,z;
    public:
    C(float x,float y,float z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void get()
    {
        cout<<"first no = "<<x<<" scn no = "<<y<<" third no = "<<z<<endl;
    }
};
class A
{
    protected:
    float first_num,scn_num,third_num;
    public:
    A(float i=0,float j=0,float k=0)
    {
        first_num=i;
        scn_num=j;
        third_num=k;
    }
    void sett(float i=0,float j=0,float k=0)
    {
        first_num=i;
        scn_num=j;
        third_num=k;
    }
    C operator +(B x)
    {
       C vi((x.a+first_num),(x.b+scn_num),(third_num+x.c));
       return vi;
    }

};
int main()
{
    A d(12.00,10.00,50.00);
    B c(20.00,30.00,70.00);
    C s=d+c;
    s.get();
    return 0;
}