#include<stdio.h>
#include<unistd.h>
void main()
{
    int r=fork(); 
    printf("hello world %d\n",r);
}