#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string Ts, middle, Fs;

        for (char c : s) {
            if (c == 'T')
                Ts.push_back(c);
            else if (c == 'F')
                Fs.push_back(c);
            else
                middle.push_back(c);
        }
        string ans = Ts + middle + Fs;
        cout << ans << "\n";
    }
    return 0;
}