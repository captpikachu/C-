


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> p(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> p[i];
//         }

//         vector<int> a = p;
//         int total = 0;

//         for (int i = 1; i <= n; ++i) {
//             int val = i;
//             int rev = 2 * n - i;

//             int index = -1;
//             for (int j = 0; j < n; ++j) {
//                 if (a[j] == val || a[j] == rev) {
//                     index = j;
//                     break;
//                 }
//             }

//             int finv = 0, binv = 0;

//             for (int j = 0; j < n; ++j) {
//                 if (j == index) continue;
//                 if (a[j] < val || a[j] > rev) continue;

//                 if (j < index && a[j] > val) finv++;
//                 if (j > index && a[j] < rev) binv++;
//                 if(j<index && a[j]>rev) binv++; 
//             }
//             cout<<"finv of "<<i<<" are "<<finv<<" and ";
//             cout<<"binv of "<<i<<" are "<<binv<<endl;
//             if (finv <= binv) {
//                 a[index] = val;
//                 total += finv;
//             } else {
//                 a[index] = rev;
//                 total += binv;
//             }
//         }

//         cout << total << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
#define int long long
using namespace std;

struct Fenwick {
    int size;
    vector<int> tree;

    Fenwick(int n = 0) : size(n), tree(n + 1, 0) {}

    void init(int n) {
        size = n;
        tree.assign(n + 1, 0);
    }

    void update(int idx) {
        for (; idx <= size; idx += idx & -idx)
            tree[idx]++;
    }

    int query(int idx) {
        int res = 0;
        for (; idx > 0; idx -= idx & -idx)
            res += tree[idx];
        return res;
    }
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int n;
        cin >> n;

        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        vector<int> rightInv(n + 1), greaterLeft(n + 1);
        Fenwick bit(n);

        int totalInv = 0;
        bit.init(n);

        for (int i = n; i >= 1; i--) {
            rightInv[i] = bit.query(arr[i] - 1);
            totalInv += rightInv[i];
            bit.update(arr[i]);
        }

        bit.init(n);
        for (int i = 1; i <= n; i++) {
            greaterLeft[i] = (i - 1) - bit.query(arr[i]);
            bit.update(arr[i]);
        }

        long long extraCost = 0;
        for (int i = 1; i <= n; i++) {
            long long betterSwap = (n - i) - rightInv[i] - greaterLeft[i];
            if (betterSwap < 0)
                extraCost += betterSwap;
        }

        cout << totalInv + extraCost << "\n";
    }

    return 0;
}
