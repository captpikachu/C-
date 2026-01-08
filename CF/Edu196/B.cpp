#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    const int MAX = 25;
    vector<long long> first(MAX, 0), second(MAX, 0);

    for (int i = 0; i < MAX; i++) {
        long long sz = (1LL << i);
        if (i == 0) {
            first[i] = sz;   
            second[i] = 0;   
        } else {
            first[i] = first[i - 1];
            second[i] = second[i - 1];
            if (i % 2 == 0)
                first[i] += sz;  
            else
                second[i] += sz; 
        }
    }

    while (t--) {
        long long a, b;
        cin >> a >> b;
        int way1 = 0, way2 = 0;
        for (int i = 0; i < MAX; i++) {
            if (first[i] <= a && second[i] <= b)
                way1 = i + 1;
            else
                break;
        }
        for (int i = 0; i < MAX; i++) {
            if (first[i] <= b && second[i] <= a)
                way2 = i + 1;
            else
                break;
        }

        cout << max(way1, way2) << endl;
    }

    return 0;
}
