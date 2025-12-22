#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int MOD_BLOCK = 210;
vector<int> coprimeCount(MOD_BLOCK + 1);
bool isCoprime210(int x) {
    return x%2 && x%3 && x%5 && x%7;
}
void precompute() {
    int cnt = 0;
    for (int i = 0; i <= MOD_BLOCK; i++) {
        if (i > 0 && isCoprime210(i)) cnt++;
        coprimeCount[i] = cnt;
    }
}

inline long long goodUpTo(long long x) {
    if (x < 1) return 0;
    long long blocks = x / MOD_BLOCK;
    int rem = x % MOD_BLOCK;
    return blocks * 48LL + coprimeCount[rem];
}

int main() {
    precompute();
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long ans = goodUpTo(r)-goodUpTo(l - 1);
        cout <<ans<<endl;
    }
    return 0;
}
