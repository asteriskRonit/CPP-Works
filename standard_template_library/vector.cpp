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
   void size(int u)
   {
       n=u;
   }
   int size()
   {
      return n;
   }
   friend ostream& operator<<(ostream& x,const VECTOR<TYPE>& v);
};
template<typename TYPE>
ostream& operator<<(ostream& x,const VECTOR<TYPE>& v)
{
       for(int i=0;i<v.size();i++)
       {
           x<<v.at(i)<<" ";
       }
       return x;
}
int main()
{
    VECTOR<int> vec,vec1;
    int arr[]={2,1,3,5};
    for(int i=1;i<=5;i++)
    {
        vec.push_back(i*2);
    }
    for(int i=1;i<4;i++)
    {
        vec1.push_back(11*i);
    }
    //vec.push_back(5,2);
    /*string s="int";
    cout<<sizeof()*/
   // vec.push_back(arr,4);
  // vec.pop_back();
   //vec.get_data();
   cout<<vec;
  // vec1.get_data();
 /*  vec.swap(vec1);
   vec.get_data();
   vec1.get_data();
   //cout<<vec[1]<<endl;*/
   /* int *ptr=vec.begin();
    *ptr=101;
    ptr=vec.end();
    *ptr=202;
    vec.get_data();*/
    
    return 0;
}