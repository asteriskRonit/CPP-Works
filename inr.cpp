#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no of elements :";	cin>>n;
	int ar_x[n];
	cout<<"Enter the terms in array\n:";
	for(int i=0;i<n;i++)
	{
		cin>>ar_x[i];
	}
    cout<<"\n----After Inputs----\n";
    for(int it=0;it<n;it++)
    {
    	cout<<ar_x[it]<<" ";
    }	
    int no_small;
    cout<<"\n\nEnter the Nth smallest no:";cin>>no_small;
    int bk=0,c=ar_x[0],final;
    for(int i=0;i<no_small;i++)
    {
      final=0;	
      for(int j=0;j<n;j++)
      {
      	  if(bk==0)
      	  {
      	  	if(c>ar_x[j])
      	  		c=ar_x[j];
      	  }	
      	  else
      	  {
              if(ar_x[j]>bk&&final<ar_x[j])
              	final=ar_x[j];
      	  }
      }	
      if(i==0) bk=c;
      else bk=final;       
    }	
    cout<<"The "<<no_small<<" smallest element is = "<<bk<<"\n";
    cout<<"\n";
	return 0;
}