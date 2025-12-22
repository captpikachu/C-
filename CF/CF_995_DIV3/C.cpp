// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int t;
// cin>>t;
// while(t){
// int n,m,k;
// cin>>n>>m>>k;
// vector<int> ques(m);
// for(int i=0;i<m;i++){
// cin>>ques[i];
// }
// int miss =0;
// vector<int> know(k);
// for(int i=0;i<k;i++){
// cin>>know[i];
// if(know[i]!=i+1 && !miss)
// miss=i+1;
// }
// string ans ="";
// if(k==n) // all pass
// {for(int i=0;i<m;i++){
// ans.append("1");
// }}

// else if(k<=n-2)
// // no pass
// {for(int i=0;i<m;i++){
// ans.append("0");
// }}
// else{
// for(int i=0;i<m;i++){
// if(ques[i]==miss)
// ans.append("1");
// else
// ans.append("0");
// }}
// cout<<ans<<endl;
//     t--;
// }

// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> ques(m);
        for (int i = 0; i < m; i++) {
            cin >> ques[i]; // List of excluded questions
        }

        set<int> know;
        for (int i = 0; i < k; i++) {
            int q;
            cin >> q;
            know.insert(q); // Monocarp's known questions
        }

        string ans = "";

        // Case 1: Monocarp knows all n questions, he passes all lists
        if (k == n) {
            ans = string(m, '1');
        }
        // Case 2: Monocarp knows fewer than n-1 questions, he fails all lists
        else if (k <= n - 2) {
            ans = string(m, '0');
        }
        // Case 3: Monocarp knows exactly n-1 questions
        else {
            for (int i = 0; i < m; i++) {
                int missing = ques[i];
                // If the missing question is the only one Monocarp doesn't know
                if (know.size() == n - 1 && know.count(missing) == 0) {
                    ans += '1'; // Pass this list
                } else {
                    ans += '0'; // Fail this list
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;

//         vector<int> excluded(m);
//         for (int i = 0; i < m; i++) {
//             cin >> excluded[i];
//         }

//         set<int> known;
//         for (int i = 0; i < k; i++) {
//             int q;
//             cin >> q;
//             known.insert(q);
//         }

//         string ans = "";

//         // Case 1: If Monocarp knows all `n` questions, he passes all lists
//         if (k == n) {
//             ans = string(m, '1');
//         }
//         // Case 2: If Monocarp knows fewer than `n-1` questions, he fails all lists
//         else if (k < n - 1) {
//             ans = string(m, '0');
//         }
//         // Case 3: Check each list
//         else {
//             for (int i = 0; i < m; i++) {
//                 if (known.size() == n - 1 && known.count(excluded[i]) == 0) {
//                     ans += '1';
//                 } else {
//                     ans += '0';
//                 }
//             }
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }

