#include<iostream>
#include<exception>
using namespace std;
class myexep:public exception
{
    public:
    const char *what() const throw()
    {
        return "failed";
    }
};
int main()
{
    int a,b;
    cout<<"Enter the numbers:";
    cin>>a,b;
    myexep s;
    try
    {
        if(b==0)
        {
            throw s;
        }
        else
        {
            cout<<"Divide is "<<a/b;
        }
    }
    catch(myexep e)
    {
        cout<<e.what();
    }
    
    return 0;
}