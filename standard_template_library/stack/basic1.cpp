#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string> name;
    string na;
    cout<<"Enter the no of students you want to enter:";
    int n;
    cin>>n;
    cout<<"Enter the names:\n";
    for(int i=0;i<n;i++)
    {
        cin>>na;
        name.push(na);
    }
    cout<<"\nThe top of the stack is: "<<name.top()<<endl;
    cout<<"\nThe size of the stack is: "<<name.size()<<endl;
    if(!name.empty())
    {
        cout<<"\nStack is not empty\n";
    }
    cout<<"\n::After the pushing into the stack::"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<name.top()<<" ";
        name.pop();
    }
    cout<<endl;
    if(name.empty())
    {
        cout<<"\nStack is empty\n";
    }
    return 0;
}