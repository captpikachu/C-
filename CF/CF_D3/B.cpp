#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
        int k;
    int n;
    cin>>n>>k;
    string s;
    cin>>s;

    int count0=0;
    int count1=0;
    int i =0;
    while(i<n){
        if(s[i]=='0')
        count0++;
        if(s[i]=='1')
        count1++;
        i++;
    }
    int over = (min(count0,count1)); // pairs over min pairs or degenersted
    int mini = (max(count0,count1)-over)/2; // min  pairs
    bool ans = false;
    for(int i = mini;i<=mini+over;i+=2){
        if(i==k)
        ans = true;

    }
    if(ans)

    // if(k>=mini && k<=over + mini)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    // if(count0==(n/2-k) || count1 == (n/2-k) || (count0==count1 && count0>1))
    // cout<<"YES"<<endl;
    // else
    // cout<<"NO"<<endl;
}

return 0;
}

