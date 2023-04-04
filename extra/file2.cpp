#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   string name;
   int roll;
   ofstream fout("te.txt",ios::app);
   cout<<"Enter the name::";
   cin>>name;
   cout<<"Enter the roll::";
   cin>>roll;

   fout<<name<<endl;
   fout<<roll<<endl;
   fout.close();
   cout<<"\nIn the text file \n\n";
   system("cat te.txt");
   return 0;
}