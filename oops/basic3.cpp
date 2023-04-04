#include<iostream>
using namespace std;
class d
{
   private:
   void ped();
   public:
   void id()
   {
       ped();
   }
};
class fr
{
    int num;
    friend void kl(fr &x);
    public:
    void set(int u)
    {
       num=u;
    }
};
void kl(fr &x)
{
    cout<<x.num<<"\n";
}
void d::ped()
{
    cout<<"hello world\n";
}
int main()
{
     fr de;
     de.set(10);
     kl(de);

    
}