#include<bits/stdc++.h>
using namespace std;
class A
{
    int a=11;
    class B
    {
        int c=19;
    };
    int c=20;
};
int main()
{

    A we;
    int* data=(int *)&we;
    cout<<*data<<endl;
    data++;
    cout<<*data<<endl;
    data++;
    cout<<*data<<endl;

}