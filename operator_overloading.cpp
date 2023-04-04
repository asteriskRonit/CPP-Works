#include<iostream>
#include<string.h>
using namespace std;
class optr
{
  private:
  	float english,maths;
  public:
  
    optr()
    {
    	english=maths=0;
    }	
    optr(float a,float b)
    {
    	english=a;
    	maths=b;
    }
    void get_info()
    {
    	cout<<"English = "<<english<<"\n Maths = "<<maths<<endl;

    }
    optr operator+(const optr &pass)
    {
        optr op;
        op.english=this->english+pass.english;
        op.maths=this->maths+pass.maths;

        return op;
    } 
};
int main()
{
    optr io(25.00f,66.00f),oi(89.00f,90.00f);
    optr ui=io + oi;
    ui.get_info();
	return 0;
}