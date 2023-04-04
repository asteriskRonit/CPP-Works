#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    cout<<"enter your age:";
    cin>>a;
    try
    {
        if(a>18)
        {
            cout<<"you are eligible:"<<a<<endl;
        }
        else
        {
            throw(a);
        }
    }
    catch(...)
    {
        cout<<"you are not eligible at the age ";
    }
    
    return 0;
}