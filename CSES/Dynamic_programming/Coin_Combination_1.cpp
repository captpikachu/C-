// #include<bits/stdc++.h>
// using namespace std;
// #define MOD 1000000007
// int number_ways(int sum,vector<int>&nums,int target,vector<int>&dp){
//     if(sum==target)
//     return 1;
//     if(sum>target)
//     return 0;
//     if(dp[sum]!=-1)
//     return dp[sum];
//     int ways =0;
//     for(int i=0;i<nums.size();i++){
//     ways=(ways + number_ways(sum+nums[i],nums,target,dp))%MOD;
//     }
// return dp[sum]=ways%MOD;
// }

// int main()
// {
//     int n,x;
//     cin>>n>>x;
//     vector<int> c(n);
//     vector<int> dp(x+1,-1);
//         for(int i=0;i<n;i++){
//         cin>>c[i];
//     }
//     cout<<number_ways(0,c,x,dp);
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int number_of_ways(int sum,int target,vector<int>&dp,vector<int> & coins){
    if(sum>target)
    return 0;
    if(sum==target)
    return 1;
    if(dp[sum]!=-1)
    return dp[sum]%MOD;
    int ways=0;
for(int j =0;j<coins.size();j++){
    ways=(ways + number_of_ways(sum+coins[j],target,dp,coins))%MOD;
}
return dp[sum] = ways%MOD;
}

int main()
{   vector<int> dp(1e6+1,-1);
    int n,x;
    cin>>n>>x;
    vector<int>coins(n);
    for(int i = 0;i<n;i++)
    cin>>coins[i];
    // int ans = 0;
    cout<<number_of_ways(0,x,dp,coins);
}