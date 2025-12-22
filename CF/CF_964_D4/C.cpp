#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n,s,m;
    cin>>n>>s>>m;
    int l,r;
    cin>>l>>r;
    int lst =r;
    int max_time=l;
    for(int i=1;i<n;i++){
        int l,r;
        cin>>l>>r;
        max_time = max(max_time,l-lst);
        lst=r;
    }
    max_time = max(max_time,m-lst);
    if(max_time>=s)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    t--;
}

return 0;
}