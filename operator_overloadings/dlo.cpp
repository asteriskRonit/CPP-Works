#include<iostream>
using namespace std;
class shape
{
    protected:
    int length,breadth;
    public:
    shape(int length,int breadth=0)
    {
        this->length=length;
        this->breadth=breadth;
    }
    virtual int Area()
    {
        cout<<"Area of shape hasbeen called"<<endl;
        return 0;
    }
};
class square:public shape
{
    public:
    square(int length):shape(length)
    {
        cout<<"Sqaure Side Value Hasbeen Initialized:"<<endl;
    }
    int Area()
    {
       cout<<"Area of square is: "<<length*length<<endl;
       return length*length;
    }
};
class rectangle:public shape
{
   public:
   rectangle(int length,int breadth):shape(length,breadth)
   {
      cout<<"Rectangle sides hasbeen initialized"<<endl;
   }
   int Area()
   {
       cout<<"Area of rectangle is "<<length*breadth<<endl;
       return length*breadth;
   }
};
int main()
{
    shape *s;
    square v(10);
    rectangle r(5,6);
    s=&v;
    s->Area();
    s=&r;
    s->Area();
    return 0;
}