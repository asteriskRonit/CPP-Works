#include<iostream>
using namespace std;
int main()
{
   string car[5]={"bmw","volvo","Mercedes","Maruti"};
   car[4]="tata";
   for(string i:car)
   {
     cout<<i<<"\n";
   }
   int i;
   do {
     cout<<car[i]<<" ";
     i++;
   } while(i<5);
   cout<<"\n";
   i=0;
   while(i<5)
   {
     cout<<car[i]<<" ";
   }
   cout<<"\n";
  return 0;
}
