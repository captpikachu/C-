// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // int t;
// // cin>>t;
// // while(t){
// // int n,k;
// // cin>>n>>k;
// // vector<int> a(n);
// // vector<int> b(n);
// // for(int i=0;i<n;i++){
// //     cin>>a[i];
// // }
// // for(int i=0;i<n;i++){
// //     cin>>b[i];
// // }
// // int low = 0;
// // int high = 1000000000;
// // int mid = (high-low)/2 + low;
// // int ans = mid;
// // while(low<=high){


// //     int neg=0;
// //     int sold=0;
// // for(int i=0;i<a.size();i++){
// //     if(mid>a[i] && mid<=b[i])
// //     {neg++;
// //     sold++;
// //     }
// //     else if(mid<=a[i])
// //     {sold++;}
// // }
// // if(neg<=k){
// // ans = mid*sold;
// //         low = mid+1;
// //         mid = (high-low)/2 + low;
        
// //     }
// //     else{
// //         ans = mid;
// //         high = mid-1;
// //         mid = (high-low)/2 + low;
// //     }

// // }
// // cout<<ans<<endl;
// //     t--;
// // }

// // return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> a(n);
//         vector<int>b(n);
//         for (int i = 0; i < n; i++) {
//             cin>>a[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin>>b[i];
//         }

//         // Binary search over the price
//         int low = 1, high = 1e9+1;
//         int max_earnings = 0;

//         while (low <= high) {
//             int mid = (low + high) / 2;
//             int sold = 0;
//             int neg_reviews = 0;

//             // Count sold trees and negative reviews for the price `mid`
//             for (int i = 0; i < n; i++) {
//                 if (mid <= a[i]) {
//                     sold++;  // Positive review
//                 } else if (mid <= b[i]) {
//                     sold++;  // Negative review
//                     neg_reviews++;
//                 }
//             }

//             // If the number of negative reviews is within the allowed limit
//             if (neg_reviews <= k) {
//                 max_earnings = max(max_earnings, mid * sold);
//                 low = mid + 1;  // Try higher price
//             } else {
//                 high = mid - 1;  // Try lower price
//             }
//         }

//         cout << max_earnings << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Initialize the binary search bounds
        int low = 1, high = *max_element(b.begin(), b.end()) + 1; // high should be the max(b[i]) + 1
        int max_earnings = 0;

        // Perform binary search over the price
        while (low <= high) {
            int mid = (low + high) / 2;
            int sold = 0;
            int neg_reviews = 0;

            // Count sold trees and negative reviews for the price `mid`
            for (int i = 0; i < n; i++) {
                if (mid <= a[i]) {
                    sold++;  // Positive review
                } else if (mid <= b[i]) {
                    sold++;  // Negative review
                    neg_reviews++;
                }
            }

            // If the number of negative reviews is within the allowed limit
            if (neg_reviews <= k) {
                max_earnings = max(max_earnings, mid * sold);
                low = mid + 1;  // Try higher price
            } else {
                high = mid - 1;  // Try lower price
            }
        }

        cout << max_earnings << endl;
    }

    return 0;
}
