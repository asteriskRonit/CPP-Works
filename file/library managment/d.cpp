#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    y:cout<<rand()%1000<<endl;
    i++;
    if(i<3)
    {
        goto y;
    }
    return 0;
}