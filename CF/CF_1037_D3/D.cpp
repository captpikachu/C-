#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> casino(n,vector<int>(3));
    for(int i =0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    casino[i]={a,b,c};
    }
    sort(casino.begin(),casino.end());
    int current =k;
    int ans = k;

    for(int i =0;i<n;i++){
    if(k>=casino[i][0] && k<=casino[i][1])
    k = casino[i][2];
    ans = max(ans,k);
    
    }
    cout<<ans<<endl;
}

return 0;
}