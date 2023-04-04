#include<iostream>
using namespace std;
int main()
{
   cout<<"\n\n\t\t\t\t\t";
    for(int i=0;i<70;i++)
    {
        cout<<"-";
    }
    string name="Ronit paul",roll="35/cs/22/08",semester="5th";
    float random=123;
    for(int i=0;i<10;i++)
    {
        l1:cout<<"\n\t\t\t\t\t";
        cout<<"|";
        if(i==1)
        {
            //cout<<"\t\t\t\t\t\t\t\t";
            cout<<"\t\t\tNIELIT AGARTALA";
            i++;
            goto l1;
        }
        if(i==4)
        {
            cout<<"\tNAME:-"<<name;
             cout<<"\t\tROLL:-"<<roll;
            i++;
            goto l1;
        }
        if(i==6)
        {
            cout<<"\tSEMESTER:-"<<semester;
            cout<<"\t\tID:-"<<random;
        }
        for(int j=1;j<70;j++)
        {
            cout<<" ";
        }
        cout<<"|";

    }
    cout<<"\n\n\n";
    return 0;
}