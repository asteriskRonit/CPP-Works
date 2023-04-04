#include<stdio.h>
#include<unistd.h>
void fork_example()
{
    if(fork()==0)
    {
        printf("fork is 0\nn");
    }
    else
    {
        printf("fork is not 0\n");
    }
}
void main()
{ 
    fork_example();
}