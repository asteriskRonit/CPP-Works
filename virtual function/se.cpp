#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
    int n=4;
    /*cout<<"Enter the no of col in x and y:";
    cin>>n;*/
    float array[n][n+1];
    array[0][0]=1;array[1][0]=3;array[2][0]=5;array[3][0]=8;
    array[0][1]=0.7854;array[1][1]=1.2490;array[2][1]=1.3734;array[3][1]=1.4464;
    /*cout<<"Enter the value of x and y:\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array[j][i];
        }
    }*/
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array[j][i]<<" ";
        }
    }
    cout<<"\n";
    int k=1;
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=(n-2)-i;j++)
        {
            array[j][i+2]=(array[j+1][i+1]-array[j][i+1])/(array[j+k][0]-array[j][0]);
            cout<<array[j][i+2]<<endl;
        }
        cout<<"\n";
        k++;
    }
    float X=6,sum=0;
    sum+=array[0][1];
    for(int i=0;i<(n-1);i++)
    {
        float ad=1;
        for(int y=1;y<=(i+1);y++)
        {
            ad*=(X-array[y-1][0]);
        }
        ad*=array[0][2+i];
        cout<<ad<<endl;
        sleep(3);
        sum+=ad;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}