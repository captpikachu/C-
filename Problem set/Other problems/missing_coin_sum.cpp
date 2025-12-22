#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> coins(n);
for(int i=0;i<n;i++){
    cin>>coins[i];
}
sort(coins.begin(),coins.end());
long long sum =0;
long long ans;
bool bk=0;
for(int i=0;i<n;i++){
if(coins[i]-sum>=2)
{ans = sum+1;
bk =1;
break;}
sum = sum+coins[i];}
if(!bk)
ans = sum+1;
cout<<ans;
return 0;
}