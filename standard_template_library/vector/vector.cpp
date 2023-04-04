#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
template<typename TYPE>
class VECTOR
{
   private:
   int n=0;
   TYPE *data=(TYPE *)malloc(sizeof(TYPE));
   public:
   void push_back(TYPE bref)
   {
     data[n]=bref;
     n++;
   }
   void push_back(int no,TYPE esf)
   {
       while (no!=0)
       {
          // data=new TYPE(no);
           data[n]=esf;
           no--;n++;
       }
   }
   void push_back(TYPE arr[],int sze)
   {
       int i=0;
       while (i<sze)
       {
           // data=new TYPE(sze);
            data[n]=arr[i];
            i++;n++;     
       }
   }
   void pop_back()
   {
       n--;
   }
   void swap(VECTOR stl)
   {
       TYPE *cpy;
       cpy=data;
       data=stl.data;
       stl.data=cpy;
       stl.get_data();
       int no=n;
       n=stl.size();
       stl.size(no);
   }
   void assign(int index,TYPE s)
   {
       data[index]=s;
   }
   void insert(int index,TYPE s)
   {
       for(int i=size();i>=index;i--)
       {
           data[i+1]=data[i];
       }
       data[index]=s;
       n++;
   }
   TYPE* begin()
   {
       return &data[0];
   }
   TYPE* end()
   {
       return &data[n-1];
   } 
   TYPE* at(int index)
   {
       return data[index];
   }

   void get_data()
   {
       for(int i=0;i<size();i++)
       {
           cout<<data[i]<<" ";
       }
       cout<<endl;
   }
   TYPE operator [](int index)
   {
       return data[index];
   }
   TYPE* front()
   {
       return &data[0];
   }
   TYPE* back()
   {
       return &data[size()-1];
   }
   void size(int u)
   {
       n=u;
   }
   int size()
   {
      return n;
   }

};
template<typename TYPE>

int main()
{


    VECTOR<int> v;
    v.push_back(5,11);
    v.get_data();
    v.insert(2,10);
    v.get_data();
    cout<<v;
    
    return 0;
}