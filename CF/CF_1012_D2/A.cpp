#include<bits/stdc++.h>
using namespace std;

int main()

{
int t;
cin>>t;
while(t--){
int x,y,a;
cin>>x>>y>>a;
int rem = a%(x+y);
if(rem-x>=0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

return 0;
}