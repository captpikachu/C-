//     #include<bits/stdc++.h>
//     using namespace std;
//     int main()
//     {
//     int t;
//     cin>>t;
//     while(t--){
//     int n,m;
//     cin>>n>>m;
//     vector<pair<int,int>> elf(n);
//     for(int i=0;i<n;i++){cin>>elf[i].first;elf[i].second=i+1;}
//             sort(elf.begin(),elf.end());

//     if((m>1&&2*m>n)||(m==1&&n<2)||(m==0&&n>0)){cout<<-1<<"\n"; continue;}

//             vector<pair<int,int>> res;
//             if(m==1){
//                 for(int i=0;i<n-1;i++) res.push_back({elf[i].second,elf[i+1].second});}
//                 else{
//     for(int i = 0;i<n-2*m;i++){
//         res.push_back({elf[i].second,elf[i+1].second});
//     }
//     for(int j = 0;j<m;j++){
//         res.push_back({elf[n-m+j].second,elf[n-2*m+j].second});
//     }}
//     cout<<res.size()<<endl;
//             for(auto p:res) cout<<p.first<<" "<<p.second<<"\n";
//     }
    
//     return 0;
    
// }

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    vector<pair<int, int>> elf(n);
    for(int i = 0; i < n; i++) {
        cin >> elf[i].first;
        elf[i].second = i + 1;
    }
    sort(elf.begin(), elf.end());

    // Impossibility Check: 
    // You need m attackers. Each attacker needs a unique victim to die.
    // Except if m=1, the last one doesn't have to attack anyone.
    if ((m > 1 && 2 * m > n) || (m == 1 && n < 1) || (m == 0 && n > 0)) {
        cout << -1 << "\n";
        return;
    }

    vector<pair<int, int>> res;
    if (m == 1) {
        // Chain: 0 kills 1, then the new 1 (who is fresh) kills 2...
        // Actually, just 0 attacks everyone else. 0 dies, everyone else stays fresh.
        // Finally, the second to last kills the last.
        for (int i = 0; i < n - 1; i++) {
            res.push_back({elf[i].second, elf[n - 1].second});
        }
    } else if (m > 1) {
        for (int i = 1; i <= n - 2 * m; i++) {
            res.push_back({elf[0].second, elf[i].second});
        }
        int victim_start = (n - 2 * m > 0) ? 1 : 0; 
        for (int j = 0; j < m; j++) {
            res.push_back({elf[n - m + j].second, elf[victim_start + j].second});
        }
    }

    cout << res.size() << "\n";
    for (auto p : res) cout << p.first << " " << p.second << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}