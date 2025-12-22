#include<bits/stdc++.h>
using namespace std;



int main()
{

    int n,x;
    cin>>n>>x;
    vector<int> c(n);
    vector<int> dp(1e6+1,1e6+2);
    for(int i=0;i<n;i++){
        cin>>c[i];
        dp[c[i]]=1;
    }
    for(int i=1;i<=1000000;i++){
        for(int k =0;k<n;k++){
            if(i-c[k]>=0)
            dp[i] = min(dp[i-c[k]]+1,dp[i]);
        }
    }
    if(dp[x]!=1e6+2)
    cout<<dp[x];
    else cout<<-1;


return 0;
}