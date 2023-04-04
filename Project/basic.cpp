#include<iostream>
using namespace std;
template <class T>
void swap(T *x,T *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int a=11,b=21;
    swap(&a,&b);
    cout<<a<<"  "<<b<<endl;
}