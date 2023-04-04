#include<iostream>
#include<string.h>
using namespace std;
class STRING
{
    private:
    char ary[30];
    public:
    STRING(char arr[])
    {
        strcpy(ary,arr);
    }
    STRING(STRING *erw)
    {
        strcpy(ary,erw->ary);
    }
    STRING(int no,char s)
    {
        ary[no]='\0';
        while(no!=0)
        {
            ary[no-1]=s;
            no--;
        }
    }
    STRING(STRING iu,int strt_indx,int end_indx)
    {
        int count=0;
        while(strt_indx<=end_indx)
        {
            ary[count]=iu.ary[strt_indx];
            strt_indx++;count++;
        }
        ary[count]='\0';
    }
    void sett(char t[])
    {
         strcpy(ary,t);
    }
    int length()
    {
       int count=0;
       while(ary[count]!='\0')
       {
           count++;
       }
       return count;
    }
    char AT(int ret)
    {
        return ary[ret];
    }
    char Front()
    {
        return ary[0];
    }
    char Back()
    {
       return ary[length()-1];
    }
    void append(char c[])
    {
        short int yu=length();
        short int i=0;
        while(i<strlen(c))
        {
            ary[yu]=c[i];
            i++;yu++;
        }
        ary[yu]='\0';
    }
    void append(STRING de)
    {
        short int yu=length();
        short int i=0;
        while(i<de.length())
        {
            ary[yu]=de.ary[i];
            i++;yu++;
        }
        ary[yu]='\0';
    }
    void append(STRING hsc,int strt_indx,int end_indx)
    {
        short int yu=length();
        while(strt_indx<=end_indx)
        {
             ary[yu]=hsc.ary[strt_indx];
             yu++;strt_indx++;
        }
       ary[yu]='\0';
    }
    void copy(STRING se)
    {
         strcpy(ary,se.ary);
    }
    void swap(STRING *fec)
    {
        char ar[20];
        strcpy(ar,ary);
        strcpy(ary,fec->ary);
        strcpy(fec->ary,ar);
    }
    void sort()
    {
        char cp;
        for(int i=0;i<strlen(ary);i++)
        {
            for(int j=0;j<strlen(ary);j++)
            {
              if(ary[j]>ary[j+1])
              {
                 cp=ary[j];
                 ary[j]=ary[j+1];
                 ary[j+1]=cp;  
              }
            }
        }
    }
    void getString()
    {
        cout<<ary<<endl;
    }
    char* retString()
    {
         return ary;
    }

};
int main()
{
   /* STRING s("hello");
    STRING w(s);
    STRING k(10,'*');
    STRING ge(s,1,4);
    s.getString();
    w.getString();
    k.getString();
    ge.getString();

    cout<<"length = "<<ge.length()<<endl;

    cout<<"alpha = "<<s.AT(3)<<endl;

    cout<<s.Front()<<"\t"<<s.Back()<<'\n';

    s.append(" javax");
    s.getString();

    cout<<"length = "<<s.length()<<endl;

    ge.append(s);
    ge.getString();*/

    STRING sks("ronit");
    STRING skb("beast");
  /*  sks.append(skb,0,3);
    sks.getString();*/
   /* sks.copy(skb);
    sks.getString();*/

    sks.swap(&skb);
    sks.getString();
    skb.getString();
    sks.erase();
    sks.getString();
    sks.sort();
    sks.getString();
    


    return 0;
}