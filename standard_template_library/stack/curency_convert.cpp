#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class curency_val
{   
    public:
    string name[2];
    int val[2];
    void get_val(string d[],int u[],int n)
    {
      for(int i=0;i<n;i++)
      {
          name[i]=d[i];
          val[i]=u[i];
      }
    }
};
string dollar[2]={"dhiram","rupees"};
int value[2]={20,75};
vector<string> currency;
void getting_push()
{
   currency.push_back("rupees");
   currency.push_back("dollar");
}
int check_length(string s,string sa)
{
    if(sa.length()==s.length())
        return 1;
    return 0;
}
int strcompare(string s,string sa)
{
   for(int i=0;i<s.length();i++)
   {
       if(!(s[i]==sa[i]))
          return 0;
   } 
   return 1;
}
int check_currency(string F,string T)
{
    for(int i=0;i<currency.size();i++)
    {
        string g=currency[i];
        /*cout<<"i = "<<i<<endl;
        cout<<"size of F = "<<F.length()<<"\nsize of g = "<<g.length()<<endl;*/
        if(check_length(F,g))
        {
            string r=currency[i];
            if(strcompare(F,r))
            {
                  cout<<"From = "<<currency[i]<<endl;
            }

        }
    }
    for(int i=0;i<currency.size();i++)
    {
        if(check_length(T,currency[i]))
        {
            string r=currency[i];
            if(strcompare(T,r))
            {
                  cout<<"TO = "<<currency[i]<<endl;
            }
        }
    }
    return 0;
}
int main()
{
    getting_push();
    string from,to;
   // cout<<"Enter the currency FROM to TO you wnat to convert:"<<endl;
    /*cout<<"\n FROM -->> ";
    cin>>from;
    cout<<"\n TO -->>";
    cin>>to;*/
    from="dollar";to="rupees";
    check_currency(from,to);
    return 0;
}