#include<bits/stdc++.h>
using namespace std;
long long lcm(int a,int b){
    return (long long)(a*b)/(__gcd(a,b));
}
int main()
{
int n;
cin>>n;
multiset<int> nums;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    nums.emplace(a);
}
multiset<long long> lc;
int k=0;
long long ans;
for(auto it = nums.begin();it!=nums.end();it++){
    auto pseudo = it++;
    it--;
    for(auto jt = pseudo;jt!=nums.end();jt++){
        lc.emplace(lcm((*it),(*jt)));
    }
}
    ans=*lc.begin();

for(auto it = ++lc.begin();it!=lc.end();it++){
    cout<<*it<<" ";
    ans = __gcd(ans,*it);
}
cout<<ans;
return 0;

}
