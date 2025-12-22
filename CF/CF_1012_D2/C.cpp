#include<bits/stdc++.h>
using namespace std;
int main()
{
int q;
while(q--){
int n;
cin>>n;
vector<int> ch(n);
for(int i =0;i<n;i++)
cin>>ch[i];
int xo,yo,x1,y1,d0,d1,num_d1;
xo=1;
yo=1;
x1=1;
y1=1;
d0=3;d1=4;
num_d1=2;
int num_d0=d0/3;
for(int i =0;i<n;i++){
if(ch[i]==0)
{   num_d0--;
    cout<<xo<<" "<<yo<<endl;
if(num_d0==0)
{d0=d0+3;
num_d0=d0/3;}
xo = 3*(d0/3 - num_d0)+1;
yo = 3*num_d0+1;
}

if(ch[i]==1){
cout<<x1<<" "<<y1<<endl;
x1=1;
y1 = d1-x1-1;
//{ st1p 1 x = x+1,y = y-1
// step2 y = y-1
// step 3 x = x+2
// step 4 step1
//}
while(y1>1){
    x1=x1+1;
    y1=y1-1;
    cout<<x1<<" "<<y1<<endl;
    num_d1--;
    y1 = y1-2;
    cout<<x1<<" "<<y1<<endl;
    num_d1--;
    x1 = x1+2;
    cout<<x1<<" "<<y1<<endl;
    num_d1--;
    
}
}


}


}

return 0;
}