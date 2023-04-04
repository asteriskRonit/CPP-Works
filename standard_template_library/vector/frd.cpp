#include<iostream>
#include<string>
using namespace std;
template<class type>
struct LL
{
    type data;
    struct LL *next;
};
template<class type>
class Forward_list
{
    int sze=0;
    struct LL<type> *linked,*rec;
    public:
    void assign(int no,type dat)
    {
        
        linked=(struct LL<type> *)malloc(sizeof(struct LL<type>));
        linked->data=dat;
        linked->next=NULL;
        rec=linked;
        for(int i=0;i<no-1;i++)
        {
            linked->next=(struct LL<type> *)malloc(sizeof(struct LL<type>));
            linked->next->data=dat;
            linked->next->next=NULL;
            if(i!=no-2)
            {
                linked=linked->next;
            }
        }
        sze=no;
        linked=rec;
    }
    void assign(type ar[],int size)
    {
        linked=(struct LL<type> *)malloc(sizeof(struct LL<type>));
        linked->data=ar[0];
        linked->next=NULL;
        rec=linked;
        for(int i=1;i<size;i++)
        {
            linked->next=(struct LL<type> *)malloc(sizeof(struct LL<type>));
            linked->next->data=ar[i];
            linked->next->next=NULL;
            if(i!=size-1)
            {
                linked=linked->next;
            }
        }
        linked=rec;
        sze=size;
    }
    void push_front(type ge)
    {
         struct LL<type> *ki;
         ki=(struct LL<type> *)malloc(sizeof(struct LL<type>));
         ki->data=ge;
         ki->next=linked;
         linked=ki;
    }
    struct LL<type>* begin()
    {
        return linked;
    }
    struct LL<type>* end()
    {
        struct LL<type> *cr;
        for(;linked->next!=NULL;linked=linked->next){}
        cr=linked;
        linked=rec;
        return cr;
    }
    void remove(type dre)
    {
        struct LL<type> *kio;
        for(type *ato=begin();ato!=end();ato)
    }
    void traverse()
    {
         for(;linked!=NULL;linked=linked->next)
         {
             cout<<linked->data<<" ";
         }
         cout<<endl;
         linked=rec;
    }
    
};
int main()
{
    Forward_list<int> forl;;
    int a[]={1,2,3,4,5};
    forl.assign(a,5);
    forl.push_front(10);
    //fore=forl.begin();
    cout<<forl.end()->data<<endl;
    forl.traverse();

}   