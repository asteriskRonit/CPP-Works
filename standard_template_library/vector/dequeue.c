#include<stdio.h>
#define max 5
int queue[max];
int front_f=-1,rear_f=-1,front_b=max,rear_b=max;
void enqueue_front(int x_value)
{
   int cal=(max-(max-rear_b)+1);
   if(cal<0)
     cal=-(cal);

   if(rear_f==cal)
   {
       printf("\nQueue is full:)\n");
       return;
   }
   else
   {
       if(front_f==-1)
         ++front_f;
       queue[++rear_f]=x_value;
   }
}
void enqueue_rear(int x_value)
{
   int cal=(5-(rear_f+(max-1))+2);
   if(cal<0)
      cal=-(cal);
   if(rear_b==cal)
   {
       printf("\nQueue is full:)\n");
       return;
   }
   else
   {
       if(front_b==max)
         --front_f;
       queue[--rear_f]=x_value;
   }
}
void display()
{
    for(int i=0;i<max;i++)
    {
        printf("%d ",queue[i]);
    }
}
void main()
{
   int er,k=0;
  // for(;;)
   //{
     /*  printf("!.front queue\n");
       printf("2.Rear queue\n");
       printf("3.Display\n");
       scanf("%d",&er);
       if(er==1)
       {
           enqueue_front(k);
           k++;
       }
       else if(er==2)
       {
           enqueue_rear(k);
           k++;
       }
       else
       {
           display();
       }
       printf("1 or 0:");
       scanf("%d",&er);
       if(er==0)
       {
           break;
       }
   }*/
   for(int i=0;i<4;i++)
   {
       enqueue_front(i);
   }
   enqueue_rear(4);
   enqueue_front(5);
   display();
      
}