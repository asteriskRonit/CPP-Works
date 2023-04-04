#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   string name;
   int roll;
   fstream fout("te.txt",ios::out);
   cout<<"Enter the name::";
   cin>>name;
   cout<<"Enter the roll::";
   cin>>roll;

   fout<<name<<endl;
   fout<<roll<<endl;
   fout.close();
   return  0;
}