#include<bits/stdtr1c++.h>
using namespace std;
class Fstream
{
   private:
   string file,choice;
   public:
   void set_value(string f,string c)
   {
       file=f;
       choice=c;
       if(choice=="write")
       {
           ofstream fr(file);
           fr<<"hello"<<endl;
           fr.close();

       }
       else
       {
           fstream uf(file,ios::in);
           string s;
           getline(uf,s);
           cout<<s<<endl;
       }
   }

};
int main()
{
   Fstream f;
   f.set_value("entity.txt","wrie");
   return 0;
}