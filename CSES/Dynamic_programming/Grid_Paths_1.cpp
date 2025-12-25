#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

// dp[i][j] = dp[i-1][j] + dp[i][j-1]
// if * dp[i][j]=0;
int num_paths(vector<vector<char>> &grid,int i,int j,vector<vector<int>> & dp){
if (i < 0 || j < 0) return 0;
if(dp[i][j]!=-1)
return dp[i][j];
if(grid[i][j]=='*')
return dp[i][j]=0;

if(i==0 && j==0)
return dp[i][j]=1;  

return dp[i][j]=(num_paths(grid,i-1,j,dp)+num_paths(grid,i,j-1,dp))%MOD;

}

int main()
{
int n;
cin>>n;
vector<vector<char>> grid;
for(int i=0;i<n;i++){
    vector<char> temp;
    for(int j=0;j<n;j++){
        char a;
        cin>>a;
        temp.emplace_back(a);
    }
    grid.emplace_back(temp);
}
vector<vector<int>> dp(n,vector<int>(n,-1));
cout<<num_paths(grid,n-1,n-1,dp);

return 0;
}
