#include<iostream>
using namespace std;
class v
{
    public:
    int yo;
};
class y:public v
{
    public:
    void set(int b)
    {
        yo=b;
    }
    int get()
    {
        return yo;
    }
};n
int main()
{
    v f;
    f.yo;
    return 0;
}