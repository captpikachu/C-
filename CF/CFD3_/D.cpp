#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string L, R;
        cin >> L >> R;
        if (L.size() < R.size())
        {
            L = string(R.size() - L.size(), '0') + L;
        }
        int n = L.size();

        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(2, 1000000)));
        for (int tl = 0; tl < 2; tl++)
        {
            for (int th = 0; th < 2; th++)
            {
                dp[n][tl][th] = 0;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int tl = 0; tl < 2; tl++)
            {
                for (int th = 0; th < 2; th++)
                {
                    int low_bound = (tl) ? L[i] - '0' : 0;
                    int high_bound = (th) ? R[i] - '0' : 9;
                    for (int d = low_bound; d <= high_bound; d++)
                    {
                        int new_tl = (tl && (d == (L[i] - '0'))) ? 1 : 0;
                        int new_th = (th && (d == (R[i] - '0'))) ? 1 : 0;
                        int cost = 0;
                        if (d == (L[i] - '0'))
                            cost++;
                        if (d == (R[i] - '0'))
                            cost++;
                        dp[i][tl][th] = min(dp[i][tl][th], cost + dp[i + 1][new_tl][new_th]);
                    }
                }
            }
        }

        cout << dp[0][1][1] << endl;
    }
    return 0;
}