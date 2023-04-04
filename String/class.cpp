#include<iostream>
#include<string.h>
using namespace std;
class input
{
    private:
    int a,b;
    public:
    void show()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    friend istream &operator >>(istream &inp,input &i);
};
istream &operator >>(istream &inp,input &i)
{
    inp>>i.a>>i.b;
    return inp;
}
int main()
{
    input y;
    cin>>y;
    y.show();
    return 0;
}