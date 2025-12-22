#include<bits/stdc++.h>
using namespace std;

class DSU{
    vector<int> parent;
    vector<int> size;
    public:
    DSU(int n){
        parent.resize(n);
        size.resize(n,1);
        for(int i =0;i<n;i++){
            parent[i]=i;
        }

    }
    int findParent(int node){
        if(parent[node]==node)
        return node;
        return parent[node]=findParent(parent[node]);
    }

    void unite(int i,int j){
        int ui = findParent(i);
        int uj = findParent(j);
        if(size[j]<size[i])
        swap(i,j);
        parent[i]=j;
        size[j]+=size[i];
    }

};


int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        DSU range(n);
        for(int i =0;i<n;i++){
            int l,r;
            cin>>l>>r;
            v[i]={l,r};
        }
    }


return 0;
}