#include<iostream>
using namespace std;
class Hello{
private:
	int a;
public:
   void set(int b)
   {
   	 a=b;
   }	
   int get()
   {
   	 return a;
   }
};
int main()
{
  Hello s;
  s.set(10);
  cout<<s.get()<<"\n";
  return 0;
}
