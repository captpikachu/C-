#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> nums(n);
    vector<int> dp(x+1,0);
    dp[0]=1;
        for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i =0;i<n;i++){
        for(int sum = nums[i];sum<=x;sum++){
            dp[sum] = (dp[sum]+dp[sum-nums[i]])%  MOD;
        }
    }
    cout<<dp[x];
return 0;
}