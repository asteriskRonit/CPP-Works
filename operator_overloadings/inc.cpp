#include<iostream>
#include<string.h>
using namespace std;
class linked_list
{
    public:
    int data;
    linked_list *lk;
};
linked_list *create_func(linked_list *k_l,int ye)
{
    k_l->lk=new linked_list();
    k_l->lk->data=ye;
    k_l->lk->lk=NULL;
    return k_l->lk;
}
void display(linked_list *r)
{
     if(r->lk!=NULL)
     {
        printf("%d\n",r->data);
        display(r->lk);
     }   
     else
        printf("%d\n",r->data);       
}
int main()
{
    linked_list *s,*q;
    s=new linked_list();
    s->data=20;
    s->lk=NULL;
    q=create_func(s,11);
    create_func(q,12);
    display(s);
    return 0;
}