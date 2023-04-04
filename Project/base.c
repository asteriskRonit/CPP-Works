#include<stdio.h>

void main()
{
    FILE *f;
    f=fopen("file.txt","r");
    if(f==NULL)
    {
        printf("File not found:");
        return;
    }
    char line[200];
    for(int i=0;i<2;i++)
    {
        fgets(line,sizeof(line),f);
        printf("%s",line);
    }
    fclose(f);
    
    

}