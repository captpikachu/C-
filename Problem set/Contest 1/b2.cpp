#include<bits/stdc++.h>
using namespace std;
bool isPossible(int mid, int d, vector<int>& players, int n) {
    int i = 0;
    int max_players=round((double)n /(double) mid);
    int curr_players=1;
    int selected =0;
    int j=0;
    while(i<mid){
        while(curr_players*players[n - 1 - i]<=d){
        curr_players++;
        }
        selected = curr_players+selected;
        i++;
        curr_players=1;
        if(selected>n)
        return false;
    }
    return true;

}
int main() {
    int n, d;
    cin >> n >> d;
    vector<int> players;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        players.emplace_back(a);
    }
    sort(players.begin(), players.end());
    int s = 0;
    int e = n;
    int mid = (e - s) / 2 + s;
    int ans = 0;
    while (s <= e) {
        // cout<<"mid is: "<<mid<<endl;
        if (isPossible(mid, d, players, n)) {
            ans = mid;
            s = mid + 1;
            mid = (e - s) / 2 + s;
        } else {
            e = mid - 1;
            mid = (e - s) / 2 + s;
        }
        
    }
    cout << ans << endl;
    return 0;
}
