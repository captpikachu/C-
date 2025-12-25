#include<bits/stdc++.h>
using namespace std;
bool canPlace(int row, int col, vector<vector<int>>& ans, int n) {
    // Check row and column
    for (int i = 0; i < 9; i++) {
        if (ans[row][i] == n || ans[i][col] == n)
            return false;
    }
// check 3*3 block
                    for(int i=0+3*(row/3);i<3+3*(row/3);i++){
                        for(int j=0+3*(col/3);j<3+3*(col/3);j++){
                            if(ans[i][j]==n)
                                return false; 
                            }            }

    return true;
}
    void backtrack(int row,int col,vector<vector<int>> ans){
        if(row==9){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++)
                cout<<ans[i][j]<<" ";
                cout<<endl;
            }
            return;
        }
        if(col==9)
        {backtrack(row+1,0,ans);
        return; }
        if(ans[row][col]!=0)
        {backtrack(row,col+1,ans);
        return; }
                for(int n=1;n<=9;n++){
                    if(canPlace(row,col,ans,n))
                    {ans[row][col]=n;
                    backtrack(row,col+1,ans);}
                    ans[row][col]=0;
                }

            }
int main()
{
vector<vector<int>> problem={{0,0,0,0,0,0,2,0,0},
{0,8,0,0,0,7,0,9,0},
{6,0,2,0,0,0,5,0,0},
{0,7,0,0,6,0,0,0,0},
{0,0,0,9,0,1,0,0,0},
{0,0,0,0,2,0,0,4,0},
{0,0,5,0,0,0,6,0,3},
{0,9,0,4,0,0,0,7,0},
{0,0,6,0,0,0,0,0,0}};

vector<vector<int>> ans(9);
ans = problem;
// backtrack(0,0,ans);
cout<<char(97);
return 0;
}
