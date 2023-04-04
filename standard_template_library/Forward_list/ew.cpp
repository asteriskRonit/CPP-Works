#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
void addition(int a,int b)
{
    cout<<"The addition of numbers is "<<(a+b)<<endl;
}
void subtraction(int a,int b)
{
    cout<<"The subtraction of number is "<<(a-b)<<endl;
}
void option(void (*ano)(int,int))
{
    ano(110,1);
}
int main(void)
{
    printf("Yhe address of function is %p \n",&addition);
    void (*function_pointer)(int,int)=&subtraction;
    //function_pointer(10,11);
    option(function_pointer);
    return 0;
}