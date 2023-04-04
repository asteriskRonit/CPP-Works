#include<iostream>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
using namespace std;
int main(int i,char *c[])
{  
 /* cout<<"string is:"<<c[1]<<endl;  
  if(*c[1]=='1')
  {
      char cb[30]="touch ";
      cout<<c[2]<<endl;
      strcat(cb,c[2]);
      system(cb);
  }
  
  return 0;*/

  DIR *d;
  struct dirent *dir;
  d=opendir(".");  //it opens a directory stream and returns a pointer to that stream
  if(d)
  {
      while ((dir=readdir(d))!=NULL)
      {
          printf("%s\n",dir->d_name);
      }
     closedir(d); 
  }
  return 0;
}