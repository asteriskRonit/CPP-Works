#include<stdio.h>
#include<stdlib.h>
void main()
{
    static int i=8;
    if(--i)
    {
      printf("%d\n",i);  
      main(10);
    }  
}