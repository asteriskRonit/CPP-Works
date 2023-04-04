#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a=10;
    vector<int> v1;
    void *p;
    v1.push_back(10);
    v1.push_back(12);
    p=v1.end();
    return 0;
}