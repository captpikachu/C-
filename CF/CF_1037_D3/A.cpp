#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ans = 9;
        int temp = n;

        while (temp > 0) {
            int d = temp % 10;
            ans = min(ans, d);
            temp /= 10;
        }

        cout << ans << "\n";  
    }
    return 0;
}
