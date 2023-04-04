#include<iostream>
#include<string>
using namespace std;
class Department
{
    protected:
    short int deptid;
    string deptname;
    public:
    Department(short int deptid,string deptname)
    {
         this->deptid=deptid;
         this->deptname=deptname;
    }
};
class Employee:public Department
{
   private:
   string Empname;
   float basic;
   public:
   Employee(string Empname,string deptname,float basic,short int deptid):Department(deptid,deptname)
   {
        this->Empname=Empname;
        this->basic=basic;

   }
   float calc_TA(float rate_per)
   {
       return ((rate_per/100)*basic);
   }
   float calc_DA(float rate_per)
   {
       return ((rate_per/100)*basic);
   }    
   float clac_GSAL(float T_a,float D_a)
   {
       return (basic+calc_TA(T_a)+calc_DA(D_a));
   }
   void display()
   {
         cout<<"DEPTID = "<<deptid<<"\tDEPTNAME = "<<deptname<<endl;
         cout<<"EMPLOYEE NAME= " <<Empname<<"\tSALARY= "<<basic<<endl;
   }
};
int main()
{
    float TA=15,DA=20;
    Employee emp("Deo sam","compter-science",10000,21);
    emp.display();
    cout<<"TA = "<<emp.calc_TA(TA)<<"\nDA = "<<emp.calc_DA(DA)<<"\nGROSS SALARY = "<<emp.clac_GSAL(TA,DA);
    return 0;
}