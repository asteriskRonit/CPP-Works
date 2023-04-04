#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;
class STRING
{
   char *str;
   int capacity;
   public:
   STRING(char c[])
   {
       if(strlen(c)>16)
       {     
           str=new char[strlen(c)+1];
           capacity=strlen(c);
       }
       else
       {
           str=new char[16];
           capacity=16;
       }
       strcpy(str,c);
   }
   int size()
   {
       return strlen(str);
   }
   int capacit_y()
   {
       return capacity;
   }
   void push_back(char c)
   {
       if(capacity==16||capacity>16)
       {
             capacity++;
             str[strlen(str)]=c;
             str[capacity]='\0';
       }
       else
       {
           str[strlen(str)]=c;
           str[strlen(str)]='\0';
       }
   }
   void pop_back()
   {
       if(capacity>16)
       {
           capacity--;
           str[strlen(str)-1]='\0';
       }
       else
        str[strlen(str)-1]='\0'; 
   }
   void resize(int no)
   {
        str[no]='\0';
   }
   void shrink_tofit()
   {
      if(strlen(str)==16&&strlen(str)>16)
         capacity=strlen(str);
       else
         capacity=16;       
   }
   void erase(int strat_indx,int end_indx)
   {
       char *cpy_ary=new char[(strlen(str)-end_indx)+1];
       int i=0;
       end_indx=(strat_indx+end_indx)-1;
       int j=0;
       for(i=0;i<strlen(str);i++)
       {
           if(!(i>=strat_indx&&i<=end_indx))
           {
               cpy_ary[j]=str[i];
               j++;
           }
       }
       cpy_ary[j]='\0';
       str=cpy_ary;
   }
   void getstring()
   {
      cout<<str<<endl;
   }
};
int main()
{
    STRING s("ronitpaul117Defrtyu");
    /*cout<<s.size()<<"  "<<s.capacit_y()<<endl;
    s.pop_back();
    cout<<s.size()<<"  "<<s.capacit_y()<<endl;*/
   /* cout<<s.size()<<"  "<<s.capacit_y()<<endl;
    s.resize(10);
    s.getstring();
    cout<<s.size()<<"  "<<s.capacit_y()<<endl;
    s.shrink_tofit();
    cout<<s.size()<<"  "<<s.capacit_y()<<endl;*/
    s.erase(1,5);
   // s.getstring();


    return 0;
}