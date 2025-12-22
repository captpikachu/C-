#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    if(n==1||m==1 || (n==2 && m==2))
    cout<<"No"<<endl;
    else
    cout<<"yes"<<endl;
}

return 0;
}