#include<bits/stdc++.h>
using namespace std;
// #define x = 100000007;
int main()
{
int n;
cin>>n;
int sum=0;
for(int j=1;j<=n;j++){
for(int i=1;(long long)i*i<=j;i++){
    if((long long) i*i == j)
    sum = (sum%100000007 + i%100000007)%100000007;
    else if(j%i==0)
    sum = (sum%100000007 + i%100000007 + (j/i)%100000007)%100000007;
}
}
cout<<sum;
return 0;
}

// 1 to root n , every number occurs i*(n//i) 