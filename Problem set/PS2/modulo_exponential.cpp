#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
long long int exp(long long base, int exponent) {
    if (exponent == 0)
        return 1;
    long long result = exp(base, exponent / 2) % MOD;
    result = (result * result) % MOD; 
    if (exponent % 2 == 1)
        result = (result * base) % MOD;
    return result;
}
    int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++){
        cout<<exp(v[i].first,v[i].second)<<'\n';
    }
return 0;
}