#include<bits/stdc++.h>
using namespace std;
const int K = 500;

int main(){


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> prefix1(n+1, 0);
        for(int i=0;i<n;++i){
            prefix1[i+1] =prefix1[i]+(s[i]=='1');
        }
        long long ans = 0;
        for(int l=0;l<n;++l){
            for(int len=1;len<=K && l+len-1<n;++len){
                int r = l+len-1;
                int ones =prefix1[r+1]-prefix1[l];
                int zeros =len-ones;
                ans += max(ones,zeros);
            }
        }
        cout << ans<<endl;;
    }

    return 0;
}


