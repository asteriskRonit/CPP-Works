#include<iostream>
#include<vector>
using namespace std;
class A
{
    int ae;
    public:
    A(int u)
    {
        ae=u;
    }
    ~A()
    {
        cout<<"The value is "<<ae<<endl;
    }
};
int main()
{
    vector<A> ers;
   // ers.push_back(1000);
    return 0;
}