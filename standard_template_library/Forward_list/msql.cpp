#include<iostream>
#include<mysql/mysql.h>
using namespace std;
int main()
{
    MYSQL *connect;
    connect=mysql_init(NULL);
    if(!connect){
        cout<<"Mysql initialzation f ailed";
        return 1;
    }
    connect=mysql_real_connect(connect,"HOST","root"," ","example",0,NULL,0);
    if(connect)
    {
        cout<<"connection succeeded\n";
    }
    else{
        cout<<"Connection Failed\n";
    }
    MYSQL_RES *res_set;
    MYSQL_ROW row;

    mysql_query (connect,"select * from example;");
    unsigned int i=0;
    res_set=mysql_store_result(connect);
    unsigned int numrous=mysql_num_rows(res_set);
    while(((row=mysql_fetch_row(res_set))!=NULL))
    {
        cout<<"\t | \t "<<row[i]<<"\t | \t";
        cout<<row[i+1]<<"\t |"<<endl;
    }
    mysql_close(connect); 






    return 0;
}