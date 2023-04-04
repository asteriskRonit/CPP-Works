#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream v("er.txt",ios::app);
    v<<"hi\n";
    return 0;
}