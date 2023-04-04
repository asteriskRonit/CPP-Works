#include<iostream>
#include<string.h>
using namespace std;
class info
{
    private:
    string name;
    int roll,age,sem;
    
    info(string s,int r,int a,int sm)
    {
        name=s;
        roll=r;
        age=a;
        sem=sm;
    }
    info()
    {
        name="";roll=age=sem=0;
    }
    int traverse(info gel)
    {
          cout<<"Your name is:"<<gel.name<<"\nYour roll,age && sem is:"<<gel.roll,gel.roll,gel.sem<<endl;
    }

};
int main()
{
    info sed("ronit",8,19,2);
    return 0;
}