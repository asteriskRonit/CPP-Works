#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int check_no(long h)
{
    ifstream kl("stdo.txt");
    while(1)
    {
        string t;
        long j;
        int u;
        kl>>j;
        kl>>u;
        if(h==j)
        {
            if(u==3)
            {
                return 0;
            }
        }
        if(!getline(kl,t))
        {
           break;
        }
    }
    return 1;
}
int check_id(long g)
{
    fstream fin("stdo.txt",ios::in);
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
int is_present(string ch)
{
     fstream fin("sd1.txt",ios::in);
     while(!fin.eof())
     {
        string s;
        int k;
        fin>>k;
        fin>>s;
      
        if(s==ch)
        {
          //  cout<<s<<"  "<<ch<<endl;
            if(k>0)
                return 1;
            else
                return 0;
        }
        getline(fin,s);
     }
     return -1;
}
void updating_list(string book)
{
    ifstream f("sd1.txt");
    ofstream fi("kk.txt");
    string line;
    while(1)
    {
        int y;
        f>>y;
        string s;
        f>>s;
        if(s==book)
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
    ofstream cfi("sd1.txt");
    while(getline(fo,line))
    {
        cfi<<line<<endl;
    }
    cfi.close();
    fo.close();
}
void update_std(long id,string bo)
{
    ifstream ifo("stdo.txt");
    ofstream ko("cot.txt");
    //string bo="dbms";
  //  long id=89384;
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
    ofstream iko("stdo.txt");
    string g;
    while(getline(io,g))
    {
        iko<<g<<endl;
    }
    io.close();
    iko.close();
}
int main()
{
    system("clear");
    ko:cout<<"\nEnter your id:-";
    long t;
    cin>>t;
    if(check_id(t))
    {
        h1:if(check_no(t)){
            string book;
            cout<<"\nEnter the name of the book you want to borrow:-";
            cin>>book;
            if(is_present(book)==0)
            {
                cout<<"\nSorry the book is out of stock:)\n";
                sleep(3);
            }
            else if(is_present(book)==1)
            {
                cout<<"\nThe book is present\n";
                updating_list(book);
                update_std(t,book);
                cout<<"\n\nDo you want to borrow more book: ";
                int o;
                cin>>o;
                if(o)
                  goto h1;  
            }
            else
            {
                cout<<"\nYou have entered wrong name of the book\n";
                sleep(3);
            }
        }
        else
        {
            cout<<"\nyour card is full\n";
            char *fil[]={"./mn",NULL};
            execvp(fil[0],fil);
        }
    }   
    else
    {
        system("clear");
        cout<<"\nplease enter your id properly\n";
        goto ko;
    }

    char *fil[]={"./mn",NULL};
    execvp(fil[0],fil);
    return 0;
}