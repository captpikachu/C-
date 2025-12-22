#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    // picks a1 first
    int swin=0;
    int win=0;
    int tie=0;
    int lost=0;
    if(a1>b1){
        win++;
    }
    else if(a1<b1)
    lost++;
    else tie++;
    if(a2>b2){
        win++;
    }
    else if(a2<b2)
    lost++;
    else tie++;

    if(tie!=0)
    win = win*2;
    if(win-lost>0)
    swin=swin+win;

    win=0;
    lost=0;
    tie=0;
    // a1 and b2
    if(a1>b2){
        win++;
    }
    else if(a1<b2)
    lost++;
    else tie++;

    if(a2>b1){
        win++;
    }
    else if(a2<b1)
    lost++;
    else tie++;
        if(tie!=0)
    win = win*2;
    if(win-lost>0)
    swin=swin+win;

    cout<<swin<<endl;
    t--;
}

return 0;
}