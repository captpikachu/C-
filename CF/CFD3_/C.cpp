#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        vector<vector<int>> copy(n,vector<int>(m));
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                // int a;
                cin>>v[i][j];
                copy[i][j]=v[i][j];
                maxi = max(maxi,v[i][j]);
            }

        }
        int row = 0;
        int col = 0;
        int prevrow=0;
        int prevcol=0;
        bool change = false;

        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(v[i][j]==maxi)
                {
                    // row=i;col=j;
                    prevrow=i;
                    prevcol=j;
                break;
                change = true;


                }
                if(change)
                break;
            }
        }

        row=prevrow;
        col=prevcol;
        change = false;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(v[i][j]==maxi && i!=prevrow && j!=prevcol)
                {
                    row=i;col=j;
                    // if(row!=prevrow && col!=prevcol)
                    break;
                    change = true;

                }
            }
            if(change)
            break;
        }

        // cout<<"rows are "<<prevrow<<" "<<row<<endl;
        // cout<<"colss are "<<prevcol<<" "<<col<<endl;
        // if(row==prevrow || col==prevcol){
        //     cout<<maxi-1<<endl;
        //     continue;
        // }
        int r1=row;
        int c1 = prevcol;
        int r2 = prevrow;
        int c2 = col;
        bool test1=true;
        bool test2=true;
        for(int j=0;j<m;j++){
            if(v[r1][j]==maxi)
            v[r1][j]=-1;
        }
        for(int i=0;i<n;i++){
            if(v[i][c1]==maxi)
            v[i][c1]=-1;
        }
                for(int j=0;j<m;j++){
            if(copy[r2][j]==maxi)
            copy[r2][j]=-1;
        }
        for(int i=0;i<n;i++){
            if(copy[i][c2]==maxi)
            copy[i][c2]=-1;
        }

                for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(v[i][j]==maxi)
                {
                    // cout<<maxi<<endl;
                    test1=false;
                    // change = true;
                break;

                }
            }
        }
                        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(copy[i][j]==maxi)
                {
                    // cout<<maxi<<endl;
                    test2=false;
                    // change = true;
                break;

                }
            }
        }

        if(test1 || test2)
        cout<<maxi-1<<endl;
        else cout<<maxi<<endl;
    }


return 0;
}