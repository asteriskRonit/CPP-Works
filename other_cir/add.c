#include<stdio.h>
void main()
{
    int n,a,b;
    printf("Enter the number of operation:");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("Enter the no's:");
        scanf("%d %d",&a,&b);
        printf("addition = %d\n",(a+b));
        n--;
    }
}