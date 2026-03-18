// #include<bits/stdc++.h>
// using namespace std;

// int steps(vector<int>& dp,int n){
//     if(n==0)
//     return 0;
//     int temp = n;
//     int digit = 1;
//     while(temp){
//         digit = max(digit,temp%10);
//         temp = temp/10;
//     }
//     return dp[n] = 1+steps(dp,n-digit);
// }

// int main(){
//     int n;
//     cin>>n;
    
//     vector<int> dp(n+1,0);
//     steps(dp,n);
//     cout<<dp[n];

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
vector<int> getDigits(int n){
    vector<int> digits;
    while(n>0){
        int digit = n%10;
        n = n/10;
        digits.push_back(digit);
    }
    return digits;
}
void precompute(vector<int> & dp){
dp[0]=0;
for(int i =1;i<=9;i++)
dp[i]=1;
for(int i =10;i<=1e6;i++){
    vector<int> digits = getDigits(i);
    for(int j =0;j<digits.size();j++)
    {
        dp[i] = min(dp[i],1 + dp[i-digits[j]]);
    }
}
}

int main()
{
int n;
cin>>n;
vector<int> dp(1e6+1,1e6+2);
precompute(dp);
cout<<dp[n]<<endl;

return 0;
}