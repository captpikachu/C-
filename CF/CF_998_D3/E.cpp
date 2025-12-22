#include<bits/stdc++.h>
using namespace std;
int countDifferentElements(const vector<int>& vec1, const vector<int>& vec2) {
    // Convert both vectors to sets for fast lookup
    unordered_set<int> set1(vec1.begin(), vec1.end());
    unordered_set<int> set2(vec2.begin(), vec2.end());
    
    int count = 0;
    
    // Count elements in vec1 but not in vec2
    for (int num : vec1) {
        if (set2.find(num) == set2.end()) {
            count++;
        }
    }
    
    // Count elements in vec2 but not in vec1
    for (int num : vec2) {
        if (set1.find(num) == set1.end()) {
            count++;
        }
    }
    
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n , m1 , m2;
        cin>>n>>m1>>m2;
        // string s(n,'0');
        vector<vector<int>> F(n);
        vector<vector<int>> G(n);
        for(int i = 0;i<m1;i++){
            int u,v;
            cin>>u>>v;
            F[u-1].push_back(v-1);
            F[v-1].push_back(u-1);
            // else
            // {G[u].push_back(v);
            // G[v].push_back(u);}
        }
                for(int i = 0;i<m2;i++){
            int u,v;
            cin>>u>>v;
            G[u-1].push_back(v-1);
            G[v-1].push_back(u-1);
        }
        int opr = 0;
        for(int i =0;i<n;i++){
            
        }
        for(int i =0;i<n;i++){
            // check diff of g AND F HERE
            opr +=countDifferentElements(F[i],G[i]);
        }
        cout<<(opr/2)<<endl;
    }


return 0;
}