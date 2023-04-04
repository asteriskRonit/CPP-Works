#include<iostream>
#include<fstream>
using namespace std;
#define max 100
int n=0;
class employee
{
   private:
   int id;
   string name,phone,designation;
   float salary;
   public:
   void set_input()
   {
       int id;
       string name,phone,designation;
       float salary;


       cout<<"Enter the name of the employee:: ";
       getline(cin,name);
       cout<<"\nEnter the id of the employee: ";
       cin>>id;
       cout<<"\nEnter the phone no of the employee: ";
       cin>>phone;
       cout<<"\nEnter the salary of the employee: ";
       cin>>salary;
       cout<<"\nEnter the designation of the employee: ";
       cin>>designation;

       this->id=id;
       this->name=name;
       this->phone=phone;
       this->designation=designation;
       this->salary=salary;
   }
   void Display_data_emp()
   {
       cout<<"The id of the employee is "<<id<<"\n\n";
       cout<<"\nThe name of the employee is "<<name<<"\n\n";
       cout<<"\nThe designation of the employee is "<<designation<<"\n\n";
       cout<<"\nThe phone of the employee "<<phone<<"\n\n";
       cout<<"\nThe salary of the employee is "<<salary<<"\n\n";
   }
   int get_id()
   {
       return id;
   }
   string get_name()
   {
       return name; 
   }
   string get_phone()
   {
       return phone;
   }
   string get_designation()
   {
       return designation;
   }
   float get_salary()
   {
       return salary;
   }
   
};
void print_all_value(string u)
{
    fstream file(u,ios::in);
    cout<<"ID\tNAME\tPHONE\tDESIGNATION\tSALARY\n";
    while(!file.eof())
    {
        string get;
        getline(file,get);
        cout<<get<<endl;
    }
}
void print_by_uni(int unicode,string filename)
{
    fstream fin(filename,ios::in);
    int count=0;
    while (!fin.eof())
    {
        int y;
        fin>>y;
        string read;
        getline(fin,read);
 
        if(y==unicode)
        {
            cout<<y;
            cout<<read<<endl;
            return;
        }
    }
}
int check_unicode(int ck_code,string f_name )
{
    fstream fs(f_name,ios::in);
    while(!fs.eof())
    {
       int unii;
       fs>>unii;
    //   cout<<unii<<"   "<<ck_code<<endl;
       string s;
       getline(fs,s); 

       if(unii==ck_code)
          return 0;
       //cout<<unii<<endl;
    }
    fs.close();
    return 1;
}
int main()
{
    //Employee system
    string file_name="Employee1.txt";
    ofstream kout(file_name,ios::app);
    employee ref;
    system("clear");
    cout<<"on render mode\n\n";
    while(1)
    {
        l1:ref.set_input();
        //ref.Display_data_emp();
       if(check_unicode(ref.get_id(),file_name)){
            kout<<ref.get_id()<<"\t";
            kout<<ref.get_name()<<"\t";
            kout<<ref.get_phone()<<"\t  ";
            kout<<ref.get_designation()<<"\t";
            kout<<ref.get_salary()<<"\t\n";
            n++;
        }
        else
        { 
          cout<<"\ncannot input the data as it has the same id:)\n\n";  
          goto l1;
        }  


        cout<<"do you want to continue the process : ";
        int option;
        cin>>option;
        if(!option)
          break;
        else
          system("clear");  

    } 
    kout.close();

    system("clear");
    cout<<"do you want to display the data??";
    int option;
    cin>>option;
    if(option)
    {
        cout<<"do you want to display the data all together??";
        cin>>option;
        if(!option)
        {
            cout<<"Enter the unicode: ";
            cin>>option;
            print_by_uni(option,file_name);
        }
        else
        {
            print_all_value(file_name);
        }
        
    }
  /*  fstream fin("Emp_data.txt",ios::in);
    string id;
    getline(fin,id);
    cout<<"\n\nID = "<<id.at(0)<<endl;

   if(!check_unicode(3,"dt1.txt"))
       cout<<"There is problem"<<endl;
    else
      cout<<"All OK!"<<endl;  */

    //  print_by_uni(67,"dt2.txt"); 

    

      return 0;
}