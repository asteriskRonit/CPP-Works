#include<iostream>
#include<fstream>
#include<unistd.h>
using namespace std;
int main()
{
    ifstream f("sd.txt");
    ofstream fi("kk.txt");
    string line;
    while(1)
    {
        int y;
        f>>y;
        string s;
        f>>s;
        if(s=="dbms")
        {
            y--;
        }
        if(getline(f,line))
        {
          fi<<y<<" "<<s<<" ";  
          fi<<line<<endl;
        }  
        else
         break;  
    }
    fi.close();
    f.close();

    ifstream fo("kk.txt");
    ofstream cfi("sd.txt");
    while(getline(fo,line))
    {
        cfi<<line<<endl;
    }
    cfi.close();
    fo.close();
    return 0;
}