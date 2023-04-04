#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string> name;
    string na;
    cout<<"Enter the number of students: ";
    int n;
    cin>>n;
    cout<<"Enter the names::\n";
    for(int i=0;i<n;i++)
    {
        cin>>na;
        name.push(na);
    }
    cout<<"After push operation......The result is::\n";
    for(int i=0;i<n;i++)
    {
        cout<<name.top()<<"\n";
        name.pop();
    }
    return 0;
}