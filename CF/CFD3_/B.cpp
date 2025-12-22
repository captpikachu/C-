#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >>n>>s;
        vector<int> freq(26, 0);
        vector<vector<int>> pos(26);
        for(int i =0;i<n;++i) {
            int ch = s[i]-'a';
            freq[ch]++;
            pos[ch].push_back(i);
        }

        bool found=false;

        for(int i =0;i<26;++i) {
            if(freq[i]>=3) {
                found=true;
                break;
            }
            if(freq[i]==2) {
                int first = pos[i][0];
                int second = pos[i][1];
                if(!(first==0 && second==n-1)) {
                    found = true;
                    break;
                }
            }
        }

        cout <<(found ?"Yes":"No") <<endl;
    }
    return 0;
}
