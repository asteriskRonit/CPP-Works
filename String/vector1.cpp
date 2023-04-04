#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(vector<int> &v1,vector<int> &v2)
{
     return v1.size()<v2.size();
}
int main()
{
   /* vector<int> types{1,2,3};
    vector<int> yut(types);
    vector<int> erw;
    erw.assign(types.begin(),types.end());
    types.push_back(12);
    types.pop_back();
    types.pop_back();
    for(int i=0;i<erw.size();i++)
    {
        cout<<erw[i]<<" ";
    }
    cout<<endl;*/

    vector <vector<int> > yu{{1,2},{3,4,5},{6}};
    cout<<yu.size()<<endl;
    for(int i=0;i<yu.size();i++)
    {
        for(int j=0;j<yu[i].size();j++)
        {
            cout<<yu[i][j]<<" ";
        }
        cout<<endl;
    }
    sort(yu.begin(),yu.end(),compare);
    cout<<"after sort"<<endl;
    for(int i=0;i<yu.size();i++)
    {
        for(int j=0;j<yu[i].size();j++)
        {
            cout<<yu[i][j]<<" ";
        }
        cout<<endl;
    }
    
             

    return 0;
}