#include<iostream>
#include<string.h>
using namespace std;
class STRING
{
    char *ary;
    public:
    STRING(char r[])
    {
        if(strlen(r)>15)
            ary=new char[strlen(r)];
        else
            ary=new char[15];
        strcpy(ary,r);         
    }
    int get_size()
    {
        cout<<"string size is = "<<strlen(ary)<<endl;
        return strlen(ary);
    }
};
int main()
{
    STRING s("ronit");
    s.get_size();
    return 0;
}