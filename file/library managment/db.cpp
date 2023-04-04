#include<iostream>
#include<mysql/mysql.h>
using namespace std;
struct connection_details{
    const char *server,*user,*password,*database;
};
MYSQL *mysql_connection_setup(struct connection_details mysql_details)
{
    MYSQL *connection=mysql_init(NULL);
    if(!mysql_real_connect(connection,mysql_details.server,mysql_details.user,mysql_details.password,mysql_details.database,0,NULL,0))
    {
        cout<<"Connection error\n";
        exit(1);
    }
    return connection;
}
int main()
{
    MYSQL *con;
    MYSQL_ROW row;
    struct connection_details myid;
    myid.server="localhost";
    myid.user="root";
    myid.password="";
    myid.database="mydb";
    con=mysql_connection_setup(myid);
    mysql_query(con,"create table ds(vvid int);");

    mysql_close(con);

    return 0;
}

