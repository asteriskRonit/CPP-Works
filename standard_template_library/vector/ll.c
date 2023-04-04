#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* create_Node(struct Node *point,int data)
{
    point->next=(struct Node *)malloc(sizeof(struct Node));
    point->next->data=data;
    point->next->next=NULL;
    return point->next;
}
void traversing(struct Node *pt)
{
    if(pt->next!=NULL)
    {
        printf("%d->",pt->data);traversing(pt->next);

    }
    else
       printf("%d",pt->data);
}
void main()
{
    struct Node *first,*rc;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=1;
    first->next=NULL;
    rc=create_Node(first,2);
    rc=create_Node(rc,3);
    rc=create_Node(rc,4);

    //printf("%d ",first->next->next->next->data);
    traversing(first);

}