#include<iostream>
using namespace std;
int main()
{
    int a=110,c=20,d=90;
    int &b=a;
    b=c;
    b=d;
    cout<<b<<" "<<a;
    cout<<b<<" "<<c;
    return 0;
}