#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    int *a;
    a=(int *)malloc(5*sizeof(4));
    cout<<"enter the number: ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"After output:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}