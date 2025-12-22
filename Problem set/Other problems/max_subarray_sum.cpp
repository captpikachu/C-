#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> psum(n+1);
int max_sum=0;
int min_sum=0;

for(int i =1;i<=n;i++){
int num;
cin>>num;
psum[i]=psum[i-1]+num;
min_sum = min(min_sum,psum[i]);
max_sum = max(psum[i]-min_sum,max_sum);
}
cout<<max_sum;

return 0;
}