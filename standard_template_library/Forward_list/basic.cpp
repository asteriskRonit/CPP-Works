#include<iostream>
#include<string>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> fl,f2;
    f2.assign({23,34,67});
    //initialization operation
    fl.assign(3,2);
    fl.push_front(120);
    fl.emplace_front(98);
    forward_list<int>::iterator ptr;
    ptr=fl.begin();
    ptr++;
    //inserting operation
    ptr=fl.insert_after(ptr,{89,78,100});
    ptr=fl.emplace_after(ptr,1990);
    //erase operation
    ptr=fl.erase_after(ptr);
    fl.remove(2);
    fl.remove_if([](int x){return x>1000;});
    //copying from 1 frwrd_list
    f2.splice_after(f2.begin(),fl);
    f2.swap(fl);
    ///fl.pop_front();
    for(int&t:fl)
    {
        cout<<t<<" ";
    }
    cout<<endl;
    f2.sort();
    //f2.clear();
  
    for(int&t:f2)
    {
        cout<<t<<" ";
    }
    cout<<endl;
    return 0;
}