#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a and b::";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw a;
        }
        a/=b;
        cout<<"The value is "<<a<<endl;
    }
    catch(...)
    {
        cout<<"you cannot divide it by 0\n";
    }
    
    return 0;
}