#include<iostream>
using namespace std;
void function(int *ptr,int x)
{
    if(ptr==NULL)
     throw 420;
    if(x==0)
      throw x;
}
int main()
{
    int a,b;
    cout<<"enter the number:";
    cin>>a>>b;
    /*try
    {
        function(&a,0);
    }
    catch(int v)
    {
        std::cerr << v<< '\n';
    }*/
    try
    {
        if(b==0)
          throw (b);
        a/=b;
        cout<<a;
    }
    catch(...)
    {
        cout<<"there is some error\n";
    }
    
    
    return 0;
}