#include<iostream>
#include<string>
#include<map>
using namespace std;
class credential
{
    private:
    string name,password;
    public:
    void sett(string nam,string pass)
    {
        name=nam;
        password=pass;
    }
    string get_name_string()
    {
         return name;
    }
    string get_pass_string()
    {
        return password;
    }
};
credential option[10];
int n=0;
int check_credential(string s,string p)
{
    if(n==0)
       return 0;
    for(int i=0;i<n;i++)
    {
        if(option[i].get_name_string()==s&&option[i].get_pass_string()==p)
        {
            return 1;
        }
    }  
    return 0;    
}
int main()
{
    option[0].sett("ronit","paul");
    option[1].sett("druba","debnath");
    n=2;
    string name,pass;
    cout<<"::::::WELCOME TO OUR PAGE:::::::"<<endl;
    cout<<"\n::::::LOGIN PAGE::::::"<<endl;
    cout<<"NAME:-";
    cin>>name;
    cout<<"password:-";
    cin>>pass;
    if(check_credential(name,pass))
    {
        cout<<"Login sucessful----\n";
    }
    else
    {
        system("clear");
    }
    return 0;
}