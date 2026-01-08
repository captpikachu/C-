#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
            int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<long long> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        suf[i]=suf[i + 1] + a[i];
    }
    long long max_x = -2e18;
    long long current_abs_pref = 0;
    for (int k = 0; k < n; ++k) {
        long long current_val;
        if (k == 0) {
            current_val = -suf[1];
        } else {
            long long suffix_sum = suf[k + 1];
            current_val = a[0] + current_abs_pref - suffix_sum;
            current_abs_pref += abs(a[k]);
        }
        if (current_val > max_x) {
            max_x = current_val;
        }
    }
    cout<<max_x<<endl;
    }
    return 0;
}   