#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int main()
{
    string space="\t\t\t\t\t";
    int option;
    system("clear");
    cout<<"\n\n\n\t\t\t\t\t____________________________________________________________________";
    cout<<"\n\n\t\t\t\t\t#########----WELCOME TO THE LIBRARY MANAGEMENT PROJECT----#########\n";
    cout<<"\t\t\t\t\t____________________________________________________________________\n\n";
    cout<<"\n\n"<<space<<">>>CHOOSE THE OPTION ACCORDING TO YOUR NEEDS<<<\n\n";
    cout<<"\n\n"<<space<<"1.GENERATE ID\n";
    cout<<"\n\n"<<space<<"2.BORROW BOOK\n";
    cout<<"\n\n"<<space<<"3.BOOK SUBMISSION\n";
    cout<<"\n\n"<<space<<"4.EXIT\n";
    cout<<"\n\n"<<space<<"please enter your choise : ";
    cin>>option;
    if(option==1)
    {
        char *fil[]={"./id",NULL};
        execvp(fil[0],fil);
    }
    else if(option==2)
    {
        char *fil[]={"./bn",NULL};
        execvp(fil[0],fil);
    }


    return 0;
}