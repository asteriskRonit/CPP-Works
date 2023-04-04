#include<stdio.h>
#include<string.h>
int str_INT_conversion(char e[])
{
    int con=0;
    for(int i=0;i<strlen(e);i++)
    {
       con*=10;
       con+=(e[i]-48);
      
    }
    return con;
}
void main(int a,char *c[])
{
    printf("you have enter %d argument \n",a);
    int ab=str_INT_conversion(c[1]);
    int ba=str_INT_conversion(c[2]);
    printf("%d %d\n",ab,ba);
    printf("\n");

}