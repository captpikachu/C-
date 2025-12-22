#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        bool possible = false;

        // Check for each element if removing it makes the sequence non-decreasing
        for (int i = 0; i < n; i++) {
            // Temporarily remove the ith element
            int removed_element = nums[i];
            nums.erase(nums.begin() + i);

            // Check if the resulting sequence is non-decreasing
            bool non_decreasing = true;
            for (int j = 1; j < n - 1; j++) {
                if (__gcd(nums[j], nums[j - 1]) > __gcd(nums[j + 1], nums[j])) {
                    non_decreasing = false;
                    break;
                }
            }

            // Restore the removed element
            nums.insert(nums.begin() + i, removed_element);

            // If removing this element makes the sequence non-decreasing, set possible to true
            if (non_decreasing) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
