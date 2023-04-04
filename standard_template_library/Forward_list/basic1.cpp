#include<iostream>
#include<string>
#include<forward_list>
#include<stdlib.h>
using namespace std;
template<class T>
class Forward_list
{
   T *donnes;
   int no_entity;
   public:
   void assign(T aray[],int no)
   {
      donnes==(T *)malloc(sizeof(T));   
      int n=no;
      for(int i=0;i<n;i++)
      {
          donnes[i]=aray[i];
      }
      no_entity=n;
   }
   void assign(int no_term,T number)
   {
       donnes==(T *)malloc(sizeof(T));
       for(int i=0;i<no_term;i++)
       {
           donnes[i]=number;
       }
       no_entity=no_term;
   }
   void push_front(T yu)
   {
       for(int lst=(no_entity-1);lst>=0;lst--)
       {
           donnes[lst+1]=donnes[lst];
       }
       donnes[0]=yu;
       no_entity++;
   }
   void get_data()
   {
      for(int i=0;i<no_entity;i++)
      {
        cout<<donnes[i]<<" ";
      }
      cout<<endl;
   }

};
int main()
{
    Forward_list<int> er;
    int a[]={1,2,3,4,5,6};
    er.assign(a,6);
    er.get_data();
    er.push_front(11);
    er.get_data();
    er.push_front(12);
    //er.assign(a);
    er.get_data();

    return 0;
}