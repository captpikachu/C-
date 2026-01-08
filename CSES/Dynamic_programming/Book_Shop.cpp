#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n>>x;
vector<int> price(n);
for(int i  = 0;i<n;i++)
cin>>price[i];
vector<int> pages(n);
for(int i  = 0;i<n;i++)
cin>>pages[i];

vector<vector<int>>  dp(x+1,vector<int>(n,0));

vector<int> prev(x+1,0);
vector<int> curr(x+1,0);
for(int i = 0;i<=x;i++){
if(i>=price[0])
prev[i]=pages[0];
}

for(int j = 1;j<n;j++){
    for(int i=0;i<=x;i++){
        int notpick = prev[i];
        int pick = 0;
        if(i-price[j]>=0)
        pick = prev[i-price[j]] + pages[j];
        curr[i] =max(pick,notpick);
    }
    prev = curr;
    fill(curr.begin(), curr.end(), 0);

}

cout<<prev[x]<<endl;
return 0;
}