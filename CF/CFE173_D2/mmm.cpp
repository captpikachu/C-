#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of the array

        vector<int> a(n);
        int special_index = -1; // Index of the special element (if exists)
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 1 && a[i] != -1) {
                special_index = i; // Record the position of x
            }
        }

        // Case 1: Compute possible sums without the special element
        set<int> possible_sums;
        possible_sums.insert(0); // Include the empty subarray sum
        int sum = 0;

        // Compute prefix sums for all elements except `x`
        for (int i = 0; i < n; i++) {
            if (i == special_index) continue;
            sum += a[i];
            possible_sums.insert(sum);
        }

        // Case 2: Adjust for subarrays including the special element
        if (special_index != -1) {
            int x = a[special_index];
            set<int> new_sums;
            for (int base_sum : possible_sums) {
                new_sums.insert(base_sum + x);
            }
            possible_sums.insert(new_sums.begin(), new_sums.end());
        }

        // Output results
        cout << possible_sums.size() << "\n";
        for (int s : possible_sums) {
            cout << s << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
