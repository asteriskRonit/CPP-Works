#include<iostream>
using namespace std;
class ewr
{
    private:
    int wqe;
    public:
    ewr(int b=0)
    {
       wqe=b;
    }
    void operator ++()
    {
        wqe++;
    }
    int getval()
    {
        return wqe;
    }
};
int main()
{
    ewr t_y(10);
    ++t_y;
    int q
    cin>>q;
    cout<<"value = "<<t_y.getval()<<endl;
    return 0;
}