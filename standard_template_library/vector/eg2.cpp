#include<iostream>
#include<string>
using namespace std;
int no;
class array
{
   string name;
   float run;
   friend istream& operator >> (istream &is,array &c);
   friend ostream& operator << (ostream &os,array &o);
};
istream& operator >> (istream &is,array &c)
{
   cout<<"enter the batsman name : "<<endl;
   is>>c.name;
   cout<<"enter the batsman run : "<<endl;
   is>>c.run;

   return is;
}
ostream& operator << (ostream &os,array &o)
{
    os<<"NAME = "<<o.name;
    os<<"\nRUNS = "<<o.run<<endl;

    return os;
}

int main()
{
    array ae;
    cin>>ae;
    cout<<ae;
    return 0;
}