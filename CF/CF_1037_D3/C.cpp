#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> towers(n);
        int max_height = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> towers[i];
            max_height = max(max_height, towers[i]);
        }

        int initial = towers[k - 1];
        sort(towers.begin(), towers.end());
        int curr = initial;
        int i = 0;
        while (i < n && towers[i] < initial) i++;
        int water =0;
        bool print= false;
        for (; i < n; i++) {
            int diff = towers[i]-curr;
            water = water + diff;
            if(water>curr)
            {cout<<"no"<<endl;
            
            print = true;
        break;}
            else
                curr = towers[i];
            
        }
if(!print)
cout<<"yes"<<endl;

    }
return 0;
}