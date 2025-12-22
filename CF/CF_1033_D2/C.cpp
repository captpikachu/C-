#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll n, m;
        cin >> n >> m;

        ll minSum = n;
        ll maxSum = (n - 1) * n / 2 + 1;
        if (m < minSum || m > maxSum) {
            cout << -1 << "\n";
            continue;
        }

        cout << 1 << "\n"; // root is 1

        vector<pair<int, int>> edges;
        vector<int> depth = {1}; // nodes at current depth
        int next_node = 2;
        ll current_sum = 1; // d(1) = 1

        int max_children = 1;
        vector<int> parent = {0}; // 0-th is dummy, 1-indexed

        // For each level, assign as many children as possible
        while (next_node <= n) {
            vector<int> new_depth;
            for (int p : depth) {
                int children = 0;
                while (next_node <= n && children < max_children) {
                    edges.push_back({p, next_node});
                    parent.push_back(p);
                    current_sum += depth.size() + 1; // depth + 1
                    new_depth.push_back(next_node);
                    next_node++;
                    children++;
                    if (current_sum == m) break;
                }
                if (current_sum == m) break;
            }
            if (current_sum == m) break;
            depth = new_depth;
            max_children++; // to keep it wide
        }

        // If still nodes left, connect them directly to root
        while (next_node <= n) {
            edges.push_back({1, next_node});
            current_sum += 1;
            next_node++;
        }

for (auto &edge : edges)
    cout << edge.first << " " << edge.second << "\n";

    }
    return 0;
}
