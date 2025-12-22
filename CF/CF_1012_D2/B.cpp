#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> balls(n);
    for (int i = 0; i < n; i++) {
        cin>>balls[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (balls[i][j] == '1') {
                bool row = true, col = true;
                for (int left = 0; left < j; left++) {
                    if (balls[i][left] == '0') {
                        row = false;
                        break;
                    }
                }
                for (int up = 0; up < i; up++) {
                    if (balls[up][j] == '0') {
                        col = false;
                        break;
                    }
                }
                if (!row && !col) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
