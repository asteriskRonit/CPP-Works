#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class d{

public:
int increament(int x)
{ return(x+1); }

};
int main()
{
   /* static int i=8;
    if(--i)
    {
      printf("%d\n",i);  
      main(10);
    }  */
    d v;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/(sizeof(arr[0]));
    transform(arr,arr+n,arr,v.increament);
    for(int i=0;i<n;i++)
       cout<<arr[i]<<"";
    return 0;
}