#include <stdio.h>
int size(int a)
{
    int i=0;
    for(;(a%10)!=0;a/=10)
    {
        i++;
    }
    return i;
}
int main(void) {
	// your code goes here
	int T,i=0;
	scanf("%d",&T);
	int ary[T];
	do
	{
	    scanf("%d",&ary[i]);
	    i++;
	    
	}while(i<T);
	i=0;
	do
	{
        int sum=0;
	    for(;(ary[i]%10)!=0;ary[i]/=10)
        {
           // printf("%d ",(ary[i])%10);
            sum+=(ary[i])%10;
        }
        printf("%d\n",sum);
        i++;
	}while(i<T);
	
	return 0;
}

