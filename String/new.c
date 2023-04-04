#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a;
    a=(int *)malloc(5*sizeof(4));
    printf("enter the number: ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("After output:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}