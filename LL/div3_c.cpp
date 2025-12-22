#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n,q;
    cin>>n>>q;

    string a;
    cin>>a;
    string b;
    cin>>b;
    while(q){
    int l,r;
    cin>>l>>r;
    int a1[26]={0};
    int a2[26]={0};
    
    for(int i=l-1;i<r;i++){
        a1[a[i]-'a']++;
        a2[b[i]-'a']++;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        ans = ans + abs(a1[i]-a2[i]);
    }
    ans=ans/2;
    cout<<ans<<endl;
    q--;}



    t--;
}

return 0;
}