#include<iostream>
using namespace std;
int main()
{
    int n,$c_ount_even=0;
    cout<<"Enter the no of terms you want to enter :";;
    cin>>n;
    int a_Oe[6]={5,4,9,3,8,2};
    int count=0;
   cout<<"Enter the elements in the array\n:";
    
    do{
            
         cin>>a_Oe[count];
         count++;   

    }while(count<n);
    cout<<"\n\n----After inputs-----\n\n";
    count=0;
    do
    {

       cout<<a_Oe[count]<<" ";    
       count++;
       
    } while (count<n);

    cout<<"\n";

    count=0;

    do
    {
        
        if(a_Oe[count]%2==0)
        {
           $c_ount_even++;
           for(int i=count;i>0;i--)
           {
               a_Oe[i]=a_Oe[i]+a_Oe[i-1];
               a_Oe[i-1]=a_Oe[i]-a_Oe[i-1];
               a_Oe[i]=a_Oe[i]-a_Oe[i-1];
           }

        }
        count++;

    } while (count<n);

    cout<<"\n\n----After Even inputs-----\n\n";
    count=0;
    do
    {

       cout<<a_Oe[count]<<" ";    
       count++;
       
    } while (count<n);

    cout<<"\n"<<$c_ount_even<<"\n";

    for(int i=0;i<$c_ount_even-1;i++)
    {
        for(int j=0;j<$c_ount_even-1;j++)
        {
            if(a_Oe[j]>a_Oe[j+1])
            {
               a_Oe[j]=a_Oe[j]+a_Oe[j+1];
               a_Oe[j+1]=a_Oe[j]-a_Oe[j+1];
               a_Oe[j]=a_Oe[j]-a_Oe[j+1];
            }
        }
    }
   for(int i=$c_ount_even;i<n-1;i++)
    {
        for(int j=$c_ount_even;j<n-1;j++)
        {
            if(a_Oe[j]>a_Oe[j+1])
            {
               a_Oe[j]=a_Oe[j]+a_Oe[j+1];
               a_Oe[j+1]=a_Oe[j]-a_Oe[j+1];
               a_Oe[j]=a_Oe[j]-a_Oe[j+1];
            }
        }
    }
    cout<<"\n\n-----After sorting-------:\n";
    for(int u=0;u<n;u++)
    {
        cout<<a_Oe[u]<<" ";
    }
    cout<<"\n";
    
    return 0;
}