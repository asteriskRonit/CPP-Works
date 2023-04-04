#include<iostream>
#include<string.h>
using namespace std;
class A
{
   public:
   virtual void fes()=0;
   void hello()
   {
       cout<<"hello everyone\n";
   }
};
class B : public A
{
    public:
    void fes()
    {
        cout<<"fes is there\n";
    }
};

int main()
{
    B d;
    d.fes();d.hello();
    return 0;
}