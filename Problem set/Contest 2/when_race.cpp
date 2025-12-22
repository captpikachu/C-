#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    string nums;
    cin>>nums;
    // int i=0;
    string ans="";
    vector<int> presum(n+1);
    for(int i=1;i<=n;i++){
        presum[i]=presum[i-1]+nums[i-1]-'0';
        // cout<<presum[i]<<" ";
    }
    int last_carry=0;
    for(int i=n;i>=1;i++){
        presum[i]=presum[i]+last_carry;
        int digit = presum[i]%10;

        last_carry = presum[i]/10;
        // char dig = digit+'0';
        string s(1,digit+'0');
        cout<<s<<endl;
        ans = ans + s;
        // cout<<ans;
    }
reverse(ans.begin(),ans.end());
// cout<<ans;
    t--;
}

return 0;
}