#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int node,int vis[],stack<int> &s){
vis[node]=1;
for(auto it: adj[node]){
    if(!vis[it])
dfs(adj,it,vis,s);
}
s.push(node);

}
int main()
{
// vector<int> adj[6];
// adj[0]={};
// adj[1]={};
// adj[4]={0,1};
// adj[3]={1};
// adj[2]={4,3};
// adj[5]={2};
const int n = 6;
    vector<int> adj[n];  // array of vectors

    // Define the edges (directed)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(5);

int vis[9]={0};
stack<int> s;
vector<int> ans;
for(int i =0;i<6;i++)
if(!vis[i])
dfs(adj,i,vis,s);

while(!s.empty())
{
    ans.push_back(s.top());
cout<<s.top();
s.pop();
}

return 0;
}






    
    // BFS solution 
    bool BFScycle(vector<vector<int>> &adj,vector<int> &vis,int index,int level){
        queue<int> q;
        q.push(index);
        // int level = 1;
        while(!q.empty()){
            
            int size = q.size();
            
            for(int i =0;i<size;i++){
                int index=q.front();
                vis[index]=level;
                q.pop();
                for(auto it:adj[index]){
                    if(!vis[it])
                    {q.push(it);
                    vis[it]=level;}
                    else if(vis[it]!=level)
                    return true;
                    }
                
            }
            level++;
            
        }
return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        vector<int> vis(numCourses,0);
        for(int i =0;i<numCourses;i++){
            if(BFScycle(adj,vis,0,1))return false;
        }
        return true;
    }
