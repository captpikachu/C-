#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int hikes = 0;
        int windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += a[i];
        }

        int i = 0;
        while (i + k <= n) {
            if (windowSum == 0) {
                hikes++;
                i += k + 1;
                windowSum = 0;
                for (int j = 0; j < k && i + j < n; j++) {
                    windowSum += a[i + j];
                }
            } else {
                if (i + k < n) windowSum += a[i + k];
                windowSum -= a[i];
                i++;
            }
        }

        cout << hikes << "\n";
    }

    return 0;
}
