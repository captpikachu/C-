#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<array<long long, 3>> casinos(n); 
        for (int i = 0; i < n; i++) {
            cin >> casinos[i][0] >> casinos[i][1] >> casinos[i][2];
        }
        sort(casinos.begin(), casinos.end(), [](auto &a, auto &b) {
            return a[0] < b[0];
        });

        long long current = k;
        int idx = 0;
        priority_queue<pair<long long, long long>> heap;
        long long ans = k;
        while (true) {
            while (idx < n && casinos[idx][0] <= current) {
                if (current <= casinos[idx][1]) { 
                    heap.push({casinos[idx][2], casinos[idx][1]});
                }
                idx++;
            }
            while (!heap.empty() && current > heap.top().second) {
                heap.pop();
            }

            if (heap.empty()) break;
            long long bestReal = heap.top().first;
            heap.pop();
            current = bestReal;
            ans = max(ans,current);
        }

        cout << ans << "\n";
    }
}
