#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector<int> facts(n+1);
vector<int> act(n+1);
for(int i=1;i<=n;i++){
cin>>facts[i];
}
for(int i=1;i<=n;i++){
cin>>act[i];
}
long long max_sum=0;
vector<long long> presum(n+1);
for(int i=1;i<=n;i++){
    presum[i]=presum[i-1]+facts[i];
}
int last_pos=0;
for(int i=1;i<=n;i++){
while(act[i]==1)
i++;
last_pos=i;
i++;
while(act[i]==1)
i++;
if(presum[i+k]-presum[last_pos]>max_sum)
max_sum=presum[i+k]-presum[last_pos];
last_pos=i;
}
return 0;
}