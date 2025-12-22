#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long lcm(int a,int b){
    return (long long)(a*b)/(__gcd(a,b));
}
int main()
{
int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
vector<long long> lc;
long long ans;
if(n>1)
ans=lcm(nums[0],nums[1]);
else{
    ans = nums[0];
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(i==0 && j==1)
        continue;
        ans = __gcd(ans,lcm(nums[i],nums[j]));
    }
}
cout<<ans;
return 0;
}

// takr prime factors sort each factor's power and second smallest element of this array with the primme (why?)

