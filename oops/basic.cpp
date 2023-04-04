#include<iostream>
using namespace std;
class v
{
    public:
    void print()
    {
        cout<<"hello";
    }
};
class main
{
    public:
    int a;
    main();
    ~ main()
    {
        cout<<"hello iam in destructor\n";
    }
    void pin()
    {
        cout<<"We are in pin"<<"\n";
        show();
    }
    void show()
    {
        cout<<"We are in show"<<"\n";
        cout<<a<<"\n";
    } 
    void show2();

};
void main::show2()
{
    cout<<"\nhello world\n";
}
main::main()
{
    cout<<"\niam the constructor\n";
}
int main()
{
    class main b;
    b.a=10;
    b.pin();
    b.show2();

    v c;
    
    return 0;

}
