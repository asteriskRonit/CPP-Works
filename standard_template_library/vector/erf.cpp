#include<bits/stdc++.h>
#define max 5
using namespace std;
int front=-1,rear=-1;
int ueue[max];
void enqueue(int x)
{
    if(rear==max-1)
    {
        cout<<"Queue is full:)"<<endl;
        return;
    }
    else
    {
        if(front==-1)
        {
            front++;
        }
        ++rear;
        ueue[rear]=x; 
    }
       
}
void dequeue()
{
    if(front==-1)
    {
        cout<<"queue is empty\n";
    }
    else
    {
        cout<<"Element deleted is "<<ueue[front]<<endl;
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
    }
}
void display()
{
    if(front==-1)
    {
        cout<<"Queue is empty\n";
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        cout<<ueue[i]<<" ";
    }
    cout<<endl;
}
int main()
{
     for(int i=0;i<6;i++)
     {
         enqueue(i);
     }
     for(int i=0;i<6;i++)
     {
          dequeue();
     }
    
     display();
}