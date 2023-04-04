#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int *p=new int;
   *p=10;
   cout<<*p<<'\n';

   int *c=(int *)malloc(sizeof(int));
   * c=11;


   return 0;
}