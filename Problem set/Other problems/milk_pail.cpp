#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,m;
cin>>x>>y>>m;
int i =1;
int max = 0;
while(y*i<m){
    // cout<<"current mmilk: "<<y*i<<endl;
i++;
}

max = y*(i-1);
int j=1;
while(j*x<m)
{j++;
}
max = (j-1)*x;
j=0;
while(i){
    if(max ==m)
break;
while(y*i + x*j <=m)
{
    if(max ==m)
    break;
    // cout<<"current milk: "<<(y*i + x*j)<<endl;

if(y*i + x*j > max && y*i + x*j <=m)
max = y*i + x*j; 
j++;
}
i--;
if(max ==m)
break;
}
cout<<max;
return 0;
}