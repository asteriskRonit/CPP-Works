#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int add(int a,int b)
{
    printf("id = %d\n",getpid());
    return (a+b);
}
struct std
{
    int a;
    float b;
};
typedef std s;
int main()
{
    /*fork();
    fork();
    fork();*/
   /* printf("hello in new %d\n",getpid());
    char *c[]={"hello","how","are",NULL};
    execv("./ra",c);*/
    printf("we are back in new %d\n",getpid());
    printf("we are back in new %d\n",getpid());
    printf("we are back in %d\n",getpid());
    add(10,11);
    system("g++ ra.cpp -o ra");
    system("./ra");
    s *b;
    b=(s *)malloc(sizeof(s));
    b->a=0xA;b->b=2.1;


    return 0;
}