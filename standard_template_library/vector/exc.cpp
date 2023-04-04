#include<iostream>
using namespace std;
namespace val
{
    int m=11;
}
namespace cls
{
    class def
    {
        int a,b;
        public:
        def(int e,int x)
        {
            a=e;b=x;
        }
        void result()
        {
            cout<<(a+b)<<endl;
        }
    };
}
int main()
{
    cout<<val::m<<endl;
    cls::def v(10,21);
    v.result();
    return 0;
}