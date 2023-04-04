#include <iostream>
using namespace std;
class def
{
  public: 
   virtual void show()
   {
   	  cout<<"hello show from base class"<<endl;
   }  
};
class efg:public def
{
   public:
   	void show()
   	{
   		cout<<"don't show"<<endl;
   	}
};
int a()
{
	return 65;
}
char a(int v=0)
{
	return 'b';
}
int ar()
{
	printf("iam in a pointer\n");
	return 0;
} 
int ar(int d[])
{
	printf("iam in a array\n");
	return 0;
}
int main()
{
	efg e;
	def &r=e;
	r.show();
   /* int a=10;
    ar(&a);*/
   return 0;
}