#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to count good subarrays in a given array
long long count_good_subarrays(int n, const vector<int>& a) {
    long long total_good_subarrays = 0;

    // Iterate through all possible starting points for subarrays
    for (int start = 0; start < n; ++start) {
        // Create two heaps: max-heap for the left half, min-heap for the right half
        priority_queue<int> max_heap; // Max-heap (left half of the subarray)
        priority_queue<int, vector<int>, greater<int>> min_heap; // Min-heap (right half of the subarray)

        // Iterate over all possible ending points for subarrays starting at 'start'
        for (int end = start; end < n; ++end) {
            int num = a[end];

            // Add the new element to the appropriate heap
            if (max_heap.empty() || num <= max_heap.top()) {
                max_heap.push(num);
            } else {
                min_heap.push(num);
            }

            // Balance the heaps to ensure the sizes are equal or max_heap has one more element
            if (max_heap.size() > min_heap.size() + 1) {
                min_heap.push(max_heap.top());
                max_heap.pop();
            } else if (min_heap.size() > max_heap.size()) {
                max_heap.push(min_heap.top());
                min_heap.pop();
            }

            // Now check the condition for good subarray
            int len = end - start + 1;
            if (len % 2 == 1) {
                // Odd-length subarrays are always good
                total_good_subarrays++;
            } else {
                // Even-length subarrays are good if the two middle elements are equal
                if (max_heap.top() == min_heap.top()) {
                    total_good_subarrays++;
                }
            }
        }
    }

    return total_good_subarrays;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array for the current test case
        cin >> n;

        vector<int> a(n); // The array of integers
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Call the function to count good subarrays and print the result
        cout << count_good_subarrays(n, a) << endl;
    }

    return 0;
}
