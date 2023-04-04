#include<iostream>
#include<string>
using namespace std;
class Department
{
    string deprt;
    int D_Id;
    float Depart_no;
    public:
    Department(string s,int no,float r)
    {
        cout<<"Enter the department : ";
        cin>>deprt;
        cout<<"Enter the department id : ";
        cin>>D_Id;
        cout<<"Enter the department no : ";
        cin>>Depart_no;
    }
    void getdata()
    {
        cout<<"Department_name : ";
        
    }
};
int main()
{

    return 0;
}