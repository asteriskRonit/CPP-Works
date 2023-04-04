#include<iostream>
#include<string>
using namespace std;
namespace delk
{
    int vol;
    namespace drel
    {
        void fun_into(int u)
        {
            vol=u;
        }
        void print_into()
        {
            cout<<"The value is = "<<vol<<endl;
        }
    }
}
namespace CLASS 
{
    class inside
    {
        string name;
        int roll;
        public:
        void Inside(string gs,int y)
        {
           name=gs;
           roll=y;
        }
        void outside()
        {
            cout<<"The name = "<<name<<endl;
            cout<<"The roll = "<<roll<<endl;
        }
    };
}
using namespace delk::drel;
int main()
{
    fun_into(12);
    print_into();

    CLASS::inside io[5];
    for(int i=0;i<5;i++)
    {
        string n;
        int o;
        cout<<"Enter the name and roll::";
        cin>>n;cin>>o;
        io[i].Inside(n,o);
    }
    for(int i=0;i<5;i++)
    {
        io[i].outside();
    }
    return 0;
}