#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> ch(n);
        for (int i = 0; i < n; i++) {
            cin >> ch[i];
        }

        // Priority queue for unoccupied tables (ti = 0)
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq0;

        // Priority queue for tables with available space (ti = 1)
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq1;

        // Initialize the first table
        pq0.push({2, 0, 0}); // Distance = 2, table at (0, 0)
        pq1.push({2, 0, 0}); // Distance = 2, table at (0, 0)

        // Track occupancy of tables
        map<pair<int, int>, int> occupancy; // Key: (x, y), Value: number of seats occupied

        for (int i = 0; i < n; i++) {
            if (ch[i] == 0) {
                // Sit at the nearest unoccupied table
                while (!pq0.empty()) {
                    int dist, x, y;
                    tie(dist, x, y) = pq0.top();
                    pq0.pop();

                    if (occupancy[{x, y}] == 0) {
                        // Seat the guest at the table
                        cout << 3 * x + 1 << " " << 3 * y + 1 << endl;
                        occupancy[{x, y}]++;
                        pq1.push({dist, x, y}); // Add to pq1 for future guests with ti = 1
                        break;
                    }
                }
            } else if (ch[i] == 1) {
                // Sit at the nearest table with available space
                while (!pq1.empty()) {
                    int dist, x, y;
                    tie(dist, x, y) = pq1.top();
                    pq1.pop();

                    if (occupancy[{x, y}] < 4) {
                        // Seat the guest at the table
                        cout << 3 * x + 1 + (occupancy[{x, y}] / 2) << " " << 3 * y + 1 + (occupancy[{x, y}] % 2) << endl;
                        occupancy[{x, y}]++;
                        if (occupancy[{x, y}] < 4) {
                            pq1.push({dist, x, y}); // Add back if there is still space
                        }
                        break;
                    }
                }
            }

            // Add new tables to the priority queues if necessary
            if (pq0.empty() || pq1.empty()) {
                int new_x = 0, new_y = 0;
                if (!pq0.empty()) {
                    int dist, x, y;
                    tie(dist, x, y) = pq0.top();
                    new_x = x;
                    new_y = y + 1;
                } else if (!pq1.empty()) {
                    int dist, x, y;
                    tie(dist, x, y) = pq1.top();
                    new_x = x;
                    new_y = y + 1;
                }

                int new_dist = 3 * new_x + 3 * new_y + 2;
                pq0.push({new_dist, new_x, new_y});
                pq1.push({new_dist, new_x, new_y});
            }
        }
    }
    return 0;
}