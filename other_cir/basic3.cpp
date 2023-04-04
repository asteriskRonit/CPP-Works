#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
   int *t,*k,r,c;
   cout<<"Enter the no of row and column:";
   cin>>r>>c;
   t=(int *)malloc(r*c*sizeof(int));
   k=t;
   cout<<"input of the array:--"<<endl;
   for(i=0;i<r*c;i++)
   {
        cin>>t[i];
   }
   cout<<"The output of the array is:"<<endl;
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
      {
         cout<<*t<<" ";
         t++;
      }
      cout<<endl;
   }
   t=k;
   cout<<"Enter the values you want to append:";
   for(int i=0;i<c;i++)
   {
      cin>>t[r+1];
   }
   cout<<"The output of the array is:"<<endl;
   for(int i=0;i<r+1;i++)
   {
      for(int j=0;j<c;j++)
      {
         cout<<*t<<" ";
         t++;
      }
      cout<<endl;
   }
   return 0;
}     