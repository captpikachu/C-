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
int last_zero=0;
int j=1;
// for(int i=1;i<=n;i++){
//     cout<<presum[i]<<" ";
// }
// cout<<endl;
while(j<=n){
    while(act[j]==1 && j<=n)
    j++;
    int temp =j;
    while( j+k<=n && act[j+k]==1)
    j++;
    // last_zero=j;
    if(j+k-1<=n){
    if(presum[j+k-1]-presum[last_zero]>max_sum)
    max_sum = presum[j+k-1]-presum[last_zero];}
    else{
        if(presum[n]-presum[last_zero]>max_sum)
        max_sum=presum[n]-presum[last_zero];
    }
    cout<<max_sum<<endl;
    last_zero=temp;
    j=temp;
    j++;
}
cout<<max_sum;
return 0;
}