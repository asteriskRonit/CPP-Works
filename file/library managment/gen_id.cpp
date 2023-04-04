#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int nhu=0;
class student
{
   public:
   string name,roll,semester;
};
void make(long b)
{
    fstream iu("stdo.txt",ios::app);
    iu<<b<<"  "<<0<<endl;
    iu.close();
}
void viewer_id(string name,string roll,string semester,long random)
{
    cout<<"\n\n\t\t\t\t\t";
    for(int i=0;i<70;i++)
    {
        cout<<"-";
    }
    for(int i=0;i<10;i++)
    {
        l1:cout<<"\n\t\t\t\t\t";
        cout<<"|";
        if(i==1)
        {
            //cout<<"\t\t\t\t\t\t\t\t";
            cout<<"\t\t\tNIELIT AGARTALA";
            i++;
            goto l1;
        }
        if(i==4)
        {
            cout<<"\tNAME:-"<<name;
             cout<<"\t\tROLL:-"<<roll;
            i++;
            goto l1;
        }
        if(i==6)
        {
            cout<<"\tSEMESTER:-"<<semester;
            cout<<"\t\t\tID:-"<<random;
        }
        for(int j=1;j<70;j++)
        {
            cout<<" ";
        }
        cout<<"|";

    }
     cout<<"\n\t\t\t\t\t";
    for(int i=0;i<70;i++)
    {
        cout<<"-";
    }
    cout<<"\n\n\n";
}
int check_unquity(string hse)
{
    fstream file("t9.txt",ios::in);
    if(nhu==0)
    {
        return 0;
    }
    while(!file.eof())
    {
        string s,s1;
        file>>s;
       // cout<<s<<"    "<<hse<<endl;
        if(s==hse)
        {
            return 1;
        }
        getline(file,s1);
    }
    file.close();
    return 0;
}
int ret_no()
{
    ifstream f("no.txt");
    int n;
    f>>n;
    f.close();
    ofstream o("no.txt");
    o<<++n;
    o.close();
    return n;
    
}
int main()
{
    tl:system("clear");
    string space="\t\t\t\t";
    fstream fout("t9.txt",ios::app);
    student stable;
    cout<<"\n1.Enter the roll of the student: ";
    cin>>stable.roll;
    cout<<"\n2.Enter the name of the student: ";
    getline(cin,stable.name);
    getline(cin,stable.name);
    cout<<"\n3.Enter the semester of the student: ";
    cin>>stable.semester;
    if(!check_unquity(stable.roll))
    {
      long nu=rand()%100000;  
      nhu++;
      nu+=ret_no();
      fout<<stable.roll<<space<<nu+1<<space<<stable.name<<"\t\t\t"<<stable.semester<<endl;
      viewer_id(stable.name,stable.roll,stable.semester,nu+1);
      make(nu+1);
    }  
    else
      cout<<"Process terminated as there is same entity present\n";  
    fout.close();
    cout<<"Do you wnat to enerate more Id : ";
    string op;
   // getline(cin,op);
    cin>>op;
    if(op=="yes")
      goto tl;
    else
    {
        char *fil[]={"./mn",NULL};
        execvp(fil[0],fil);
    }  
    return 0;
}