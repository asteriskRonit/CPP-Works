#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    int a[n];
    cout<<"Enter the number:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    /*cout<<"\nAfter Input:\n";
    for(int u=0;u<n;u++)
    {
        cout<<a[u];
    }*/
    int t=a[0];
    for(int y=1;y<n;y++)
    {
        if(t<a[y])
        {
            t=a[y];
        }
    }
    cout<<"\n"<<t<<"\n";
    return 0;
}