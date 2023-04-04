#include<iostream>
#include<string>
#include<vector>
using namespace std;
class base
{
    int ter;
    public:
    base(int y)
    {
        ter=y;
    }
    void get_data()
    {
        cout<<ter<<endl;
    }
    ~base()
    {
         cout<<"hello"<<endl;
         cout<<ter<<endl;
    }

};
int main()
{
    vector<base> bs;
    bs.push_back(121);  
    cout<<"hell1o"<<endl;
    return 0;
}