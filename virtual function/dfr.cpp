#include<iostream>
#include<string>
using namespace std;
class A
{
   public:
   virtual void fun(char e)
   {
       cout<<"hello\n";
   }
};
class B:public A
{
    public:
    void fun(int v)
    {
        cout<<"greetimg\n";
    }
    void hollo()
    {
        cout<<"hoollo\n";
    }
};
int main()
{
     A *p;
     B c;
     p=&c;
     p->fun(10);
    

    return 0;
}