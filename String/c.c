#include<stdio.h>
#include<stdlib.h>
#include"mysql.h"
void main()
{
  MYSQL *con=mysql_init(NULL);
  if(con==NULL)
  {
      fprintf(stderr,"%s\n",mysql_error(con));
      exit(1);
  }   
  if(mysql_real_connect(con,"localhost","root","",NULL,0,NULL,0)==NULL)
  {
      fprintf(stderr,"%s\n",mysql_error(con));
      mysql_close(con);
      exit(1);
  }
  if(mysql_query(con,"CREATE DATABASE we_table"))
  {
      printf("Database hasbeen ccreated:");
  }
  mysql_close(con);
}    