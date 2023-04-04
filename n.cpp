#include<iostream>
using namespace std;
class myclass{
 public:
     int a;
    void print(){
      cout<<a<<"\n";
    };
};
int main()
{
  myclass o;
  o.a=10;
  o.print();
  return 0;
}
