#include<iostream>
#include<vector>
#include<string>
using namespace std;
class A
{
    int no;
    public:
    A(int o)
    {
        no=o;
    }
    void get()
    {
        cout<<no<<endl;
    }
};
class Department_Info
{
    string D_name;
    int D_Id,Std_dep;
    public:
    Department_Info(string name,int id,int no)
    {
        D_name=name;
        D_Id=id;
        Std_dep=no;
    }
    int get_D_Info()
    {

        cout<<"\n::Department Information::\n\n";
        cout<<"Department Name = "<<D_name<<endl;
        cout<<"Department Id = "<<D_Id<<endl;
        cout<<"No of Students = "<<Std_dep<<endl;
        return 1;
    }
};
int main()
{
    Department_Info d1("computer",21,100),d2("Mecahnics",23,120),d3("Electrical",13,23);
    d1.get_D_Info();
    d2.get_D_Info();
    d3.get_D_Info();
    return 0;
}