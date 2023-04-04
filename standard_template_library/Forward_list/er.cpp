#include<iostream>
#include<forward_list>
#include<list>
#include<string>
using namespace std;
template<class T>
void show_item(list<T> sde)
{
    for(auto i=sde.begin();i!=sde.end();i++)
    {
         cout<<*i<<" ";
    }
    cout<<endl;
}
void show_reverse(list<string> sde)
{
    for(auto i=sde.rbegin();i!=sde.rend();i++)
    {
         cout<<*i<<" ";
    }
    cout<<endl;
}
int main()
{
   /* list<string> ls,ll;
    ls.push_back("Ronit");
    ls.push_back("subham");
    ls.push_back("priyangshu");
    show_item(ls);
    ls.push_front("druba");
    show_item(ls);

    cout<<ls.front()<<"\t"<<ls.back()<<endl;

    show_reverse(ls);

    //ls.reverse();

    ls.sort();

    show_item(ls);*/

    list<int> ll,le;

    for(int i=5;i>0;i--)
    {
       ll.push_back(i*5);
       le.push_back(i*10);
    }
    ll.push_front(25);
    show_item(ll);
    ll.sort();
    ll.unique();
    show_item(ll);

    ll.merge(le);
    
    show_item(ll);
     
    auto k=ll.begin();
    ll.erase(k);

    ll.unique();


    show_item(ll);

    return 0;
}