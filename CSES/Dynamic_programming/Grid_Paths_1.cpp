#include<bits/stdc++.h>
using namespace std;
// dp[i][j] = dp[i-1][j] + dp[i][j-1]
// if * dp[i][j]=0;
int num_paths(vector<vector<char>> &grid,int i,int j,vector<vector<int>> & dp){
    



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

return 0;
}