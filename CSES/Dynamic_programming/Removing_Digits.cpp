#include<bits/stdc++.h>
using namespace std;

int steps(vector<int>& dp,int n){
    if(n==0)
    return 0;
    int temp = n;
    int digit = 1;
    while(temp){
        digit = max(digit,temp%10);
        temp = temp/10;
    }
    return dp[n] = 1+steps(dp,n-digit);
}

int main(){
    int n;
    cin>>n;
    
    vector<int> dp(n+1,0);
    steps(dp,n);
    cout<<dp[n];

    return 0;
}