#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long T1 = (long long) n * (n + 1) * (n + 2) / 6;
        vector<long long> P(n + 1);
        P[0] = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                P[i + 1] = P[i] + 1;
            } else {
                P[i + 1] = P[i] - 1;
            }
        }

        sort(P.begin(), P.end());

        long long pre = 0;
        long long S2 = 0;
        for (int j = 0; j <= n; ++j) {
            S2 += (long long) j * P[j] - pre;
            pre += P[j];
        }

        long long ans = (T1 + S2) / 2;
        cout << ans << endl;
    }
    return 0;
}