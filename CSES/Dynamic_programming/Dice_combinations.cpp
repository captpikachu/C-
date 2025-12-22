#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int number_of_ways(int sum,int target,vector<int>&dp){
    if(sum>target)
    return 0;
    if(sum==target)
    return 1;
    if(dp[sum]!=-1)
    return dp[sum]%MOD;
    int ways=0;
for(int val =1;val<=6;val++){
    ways=(ways + number_of_ways(sum+val,target,dp))%MOD;
}
return dp[sum] = ways%MOD;
}

int main()
{   vector<int> dp(1e6+1,-1);
    int n;
    cin>>n;
    int ans = 0;
    cout<<number_of_ways(0,n,dp);
}