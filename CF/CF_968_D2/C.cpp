#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> map(26, 0); // Frequency array for each character
        for (int i = 0; i < n; i++) {
            int val = s[i] - 'a';
            map[val]++;
        }

        string ans = "";
        // Construct the result string
        while (ans.size() < n) {
            for (int j = 0; j < 26; j++) {
                if (map[j] > 0) {
                    map[j]--;
                    ans += char('a' + j);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
