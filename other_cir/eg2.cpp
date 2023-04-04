#include<iostream>
#include<string>
using namespace std;
template<class X>
class operation
{
    int N;
    X array[20];
    public:
    operation(int no_terms,X ary[])
    {
        N=no_terms;
        copy_terms(ary);
    }
    void copy_terms(X ar[])
    {
        for(int i=0;i<N;i++)
        {
            array[i]=ar[i];
        }
    }
    void sort()
    {
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(array[i]>array[j])
                {
                    int y=array[i];
                    array[i]=array[j];
                    array[j]=y;
                }
            }
        }
    }
    void return_value()
    {
        for(int i=0;i<N;i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{

    int array[]={5,4,3,2,1};
    operation<int> objects(5,array);
    objects.sort();
    objects.return_value();
    return 0;
}