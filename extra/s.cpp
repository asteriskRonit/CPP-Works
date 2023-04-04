#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of player participating:";
    cin>>n;
    int player[n]={0};
    int i=0;
    string cap1[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the captha for player "<<i+1<<" :";
        cin>>cap1[i];
    }
    while(1)
    {
        if(i==n)
        {
            i=0;
        }
        string g;
        l1:cout<<"please enter the captcha of player "<<i+1<<" :" ;
        cin>>g;
        if(g.compare(cap1[i])==0)
        {
            char b;
            cout<<"player "<<i+1<<" please enter a to throw your dice"<<endl;
            cin>>b;
            if(b=='a')
            {
                cout<<"hello\n";
                int d=(rand()%5+1);
                if((player[i]+d)<=10)
                {
                  player[i]+=(rand()%5+1);
                  cout<<"player"<<i<<" value is "<<player[i]<<endl;
                }
            }
            if(player[i]==10)
                break;
        }
        else
        {
            goto l1;
        }
        i++;
    }
    


    return 0;
}