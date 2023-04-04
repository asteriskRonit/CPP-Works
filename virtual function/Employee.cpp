#include<iostream>
#include<string>
using namespace std;
class Employee
{
     int id;
    string name;
    float salary;
    public:
    void inpdata()
    {
       cout<<"Id = ";cin>>id;
       cout<<"name = ";cin>>name;
       cout<<"salary = ";cin>>salary;
    }
    void getdata()
    {
        cout<<"Id = "<<id<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"salary = "<<salary<<endl;
    }
};
int main()
{
    int n,id;
    string name;
    float sal;
    cout<<"Enter the value of n:";
    cin>>n;
    Employee emp[n];
    for(int i=0;i<n;i++)
    {
        emp[i].inpdata();
    }
    for(int i=0;i<n;i++)
    {
        emp[i].getdata();
    }

    return 0;
}