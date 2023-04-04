#include<bits/stdc++.h>
using namespace std;
class A
{
    int ew;
    public:
    A()
    {
        cout<<"Constructer created!!"<<endl;
    }
    void sett(int r)
    {
        ew=r;
        cout<<ew<<endl;
    }
};
class B
{
    int a;
    public:
    class C
    {
        int e;
        public:
        C(int y)
        {
            e=y;
        }

        void get_data()
        {
            cout<<"The value of var is: "<<e<<endl;
        }
    };
    B(int cd)
    {
        a=cd;
    }
    void get_existing_data()
    {
        cout<<"The data is : "<<a<<endl;
    }
};
int main()
{
    /*int *p;
    p=new int();
    p[0]=11;
    p[1]=22;
    for(int i=0;i<2;i++)
    {
        cout<<p[i]<<" ";
    }*/

//    vector<A> vec;
      
    B::C erw(20);
    erw.get_data();

    return 0;
}