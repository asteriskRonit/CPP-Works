#include<bits/stdc++.h>
using namespace std;
int check_id(long g)
{
    fstream fin("sta.txt",ios::in);
    while(!fin.eof())
    {
        string s;
        long k;
        fin>>k;
      //  cout<<g<<"    "<<k<<endl;
        if(k==g)
        {
            //cout<<"matched\n";
            return 1;
        }
        getline(fin,s);
    }
    fin.close();
    return 0;
}
void ret_book(long i,string r)
{
    ifstream fd("sta.txt");
    ofstream gg("ftb.txt");
    while(1)
    {
        long l;
        int oi;
        string s;
        fd>>l;
        if(l==i)
        {
            gg<<l;
            fd>>oi;
            gg<<"  "<<--oi<<"  ";
            for(int j=0;j<oi+1;j++)
            {
                
                fd>>s;
                if(!(s==r))
                {
                    gg<<s<<"  ";
                }
            }
            gg<<endl;
            goto l1;
           
        }
        if(getline(fd,s))
        {
            gg<<l;
            gg<<s<<endl;
        }
        else
        {
              break;
        }
        l1:gg<<"";
    }
}
int main()
{
    cout<<"Enter the id: ";
    long j;
    cin>>j;
    if(check_id(j))
    {
        cout<<"Enter the book you want to submit:";
        string bk;
        cin>>bk;
        ret_book(j,bk);
    }
    return 0;
}