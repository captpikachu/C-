#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t--) {
        int n; long long c;
        cin >> n >> c;
        vector<long long> bags(n);
        for (int i = 0; i < n; i++) cin >> bags[i];
        sort(bags.begin(), bags.end());
        int coins = 0;
        while (!bags.empty()) {
            auto it = upper_bound(bags.begin(), bags.end(), c);
            if (it != bags.begin()) {
                --it; 
                bags.erase(it); 
            } else {
                bags.erase(bags.begin());
                coins++;
            }
            for (auto &x : bags) x *= 2;
            sort(bags.begin(), bags.end()); 
        }

        cout << coins <<endl;
    }
}

int main() {
    solve();
    return 0;
}
