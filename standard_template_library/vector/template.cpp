#include<iostream>
#include<string>
using namespace std;
template<class T>
class A
{
    public:
    void a(T e)
    {
       T *c;
       c=new T();
       *c=e;
       cout<<*c<<endl;
    }
};
int main()
{
    A<char> d;
    d.a('c');
    return 0;
}