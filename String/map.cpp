#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
int main()
{

    map <int,float> MAP;
    MAP[21]=20.02;
    MAP[20]=32.21;
    MAP[13]=99.021;
    MAP[400]=100.32;
    MAP[51]=35.59;
   map <int,float> mAP;
    mAP[211]=201.02;
    mAP[201]=321.21;
    mAP[132]=991.021;
    mAP[430]=1001.32;
    mAP[591]=351.59;
    cout<<"size = "<<mAP.size()<<endl;
    //cout<<"MAx size = "<<MAP.max_size()<<endl;

    MAP.swap(mAP);

    cout<<"traversing----\n";
    for(map<int,float>::iterator it=MAP.begin();it!=MAP.end();++it)
    {
        cout<<(*it).first<<":"<<(*it).second<<endl;
    }
    cout<<"traversing1----\n";
    for(map<int,float>::iterator it=mAP.begin();it!=mAP.end();++it)
    {
        cout<<(*it).first<<":"<<(*it).second<<endl;
    }
    
    return 0;
}
