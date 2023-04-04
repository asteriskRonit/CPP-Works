#include<iostream>
using namespace std;
int check_leap_year(int u)
{
    if((u%4==0)&&(u%4400==0)||(u%100!=0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int input_month[3];
    cout<<"Enter the date::";
    for(int i=0;i<3;i++)
    {
        cin>>input_month[i];
    }
    if(input_month[1]==2)
    {
         if(check_leap_year(input_month[2]))
             cout<<"In the month of "<<input_month[1]<<" the total day is "<<29<<endl; 
         else
               cout<<"In the month of "<<input_month[1]<<" the total day is "<<28<<endl; 
    }     
    else if(input_month[1]<8&&input_month[1]%2!=0)
         cout<<"In the month of "<<input_month[1]<<" the total day is "<<31<<endl; 
    else
         cout<<"In the month of "<<input_month[1]<<" the total day is "<<30<<endl; 
 
     int sum=0;
    for(int i=0;i<(input_month[1]-1);i++)
    {
        if(i==1)
        {
           if(check_leap_year(input_month[2]))
               sum+=29;
           else    
              sum+=28;
        }  
        else if((i+1)<8&&(i+1)%2!=0)  
          sum+=31;
        else
          sum+=30;  
    }  
    cout<<"sum = "<<sum<<endl;
    cout<<"\nThe total no of days is "<<(sum+input_month[0])<<endl;
    return 0;
}