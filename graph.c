#include<stdio.h>
#include<stdlib.h>
void show(int *o)
{
    *o=*o+1;
    printf("%d\n",*o);
}
void main()
{
    int *p;
    printf("Enter the value:");
    p=(int *)malloc(sizeof(int));
    scanf("%d",p);
    show(p);
    printf("The value is %d\n",*p);

}