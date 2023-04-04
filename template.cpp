#include<iostream>
using namespace std;
template <class T>
T add(T x,T y)
{
    if(x!=y)
    {
       x++;
       x=add(x,y);
    } 
    return x;  
}
template <class P>
void swp(P a,P b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    //cout<<"a = "<<a<<" b = "<<b<<endl;
    return a+b;
}

/*float add(int a,float b)
{
    return (a+b);
}
float add(float a,int b)
{
    return (a+b);
}*/
int main()
{
    int a=6,b=4;
    swp(a,b);
    
    return 0;
}