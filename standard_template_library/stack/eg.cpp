#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> push;
    push.push_back("ronit");
    push.push_back("druba");
    for(int i=0;i<push.size();i++)
    {
        cout<<push[i]<<"  ";
    }
    string s=push[0];
    cout<<s.length()<<endl;
    return 0;
}