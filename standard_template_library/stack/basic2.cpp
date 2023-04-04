#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> name,name1;
    name.push("ronit");
    name.push("subham");
    name1.push("beast");
    name1.push("druba");
    
    name.swap(name1);
    cout<<name.size()<<endl;
    for(int i=0;i<name.size();i++)
    {
        cout<<"name = "<<name.top()<<endl;
        name.pop();
    }

    return 0;
}