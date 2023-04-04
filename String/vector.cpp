#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    /*vector<int> vec;
    int n,m;
    cout<<"Enter the no of entity: ";
    cin>>n;
    cout<<"enter the imputs: ";
    for(int i=0;i<n;i++)
    {
         cin>>m;
         vec.push_back(m);
    }
    cout<<"After input: "<<endl;
    for(int j=0;j<vec.size();j++)
    {
        cout<<vec[j]<<" ";
    }
    cout<<endl;*/
    
    int row;
    int col[5]={1,2,3,4,5};
    cout<<"Enter the no of rows: ";
    cin>>row;
  
    vector<vector <int>> vec1(row);
    for(int i=0;i<row;i++)
    {
        int colomn=col[i];
        vec1[i]=vector<int>(colomn);
        for(int j=1;j<=colomn;j++)
        {
             vec1[i][j-1]=j;
        }
    }
    cout<<"OUTPUT:"<<endl;
    for(int i=0;i<vec1.size();i++)
    { 
         for(int j=0;j<vec1[i].size();j++)
         {
             cout<<vec1[i][j]<<" ";
         }
         cout<<endl;
    }
    return 0;
}