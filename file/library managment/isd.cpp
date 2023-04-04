#include<bits/stdc++.h>
using namespace std;
int main()
{

    ifstream ifo("sn1.txt");
    ofstream ko("cot.txt");
    string bo="dbms";
    long id=89384;
    while(1)
    {
        long k;
        int yo;
        string line;
        ifo>>k;
        ifo>>yo;
        if(getline(ifo,line))
        {
            if(k==id)
            {
              ko<<k<<"  "<<++yo<<"   "<<bo<<"   "<<line<<endl;
            }
            else
             ko<<k<<"  "<<yo<<"  "<<line<<endl;   

        }
        else
           break;
    }
    ifo.close();
    ko.close();
    ifstream io("cot.txt");
    ofstream iko("sn1.txt");
    string g;
    while(getline(io,g))
    {
        iko<<g<<endl;
    }
    io.close();
    iko.close();
    return 0;
}