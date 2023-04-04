#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream fin("data.txt",ios::in);
    string s;
    fin>>s;
    if(s=="hello")
       cout<<s<<endl;
    fin.close();
    return 0;
}