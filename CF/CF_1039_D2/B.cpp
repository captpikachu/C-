

#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        string ans;
        int s = 0;
        int e = n - 1;

        int last = -1;    
        int inc = 0;
        int dec = 0;      

        while (s <= e) {
            int left = nums[s];
            int right = nums[e];
            int diffL = (last == -1 ? 0 : (left > last ? 1 : -1));
            int diffR = (last == -1 ? 0 : (right > last ? 1 : -1));
            int tmpIncL = inc, tmpDecL = dec;
            if (diffL > 0) tmpIncL++, tmpDecL = 0;
            else if (diffL < 0) tmpDecL++, tmpIncL = 0;
            int tmpIncR = inc, tmpDecR = dec;
            if (diffR > 0) tmpIncR++, tmpDecR = 0;
            else if (diffR < 0) tmpDecR++, tmpIncR = 0;

            bool canL = (tmpIncL < 4 && tmpDecL < 4);
            bool canR = (tmpIncR < 4 && tmpDecR < 4);

            char pick;
            int chosenVal;

            if (canL && canR) {
                if (diffL > 0 && diffR > 0) {
                    if (left > right) { pick = 'L'; chosenVal = left; s++; }
                    else { pick = 'R'; chosenVal = right; e--; }
                }
                else if (diffL < 0 && diffR < 0) {
                    if (left < right) { pick = 'L'; chosenVal = left; s++; }
                    else { pick = 'R'; chosenVal = right; e--; }
                }
                else {
                    if (diffL > 0) { pick = 'L'; chosenVal = left; s++; }
                    else { pick = 'R'; chosenVal = right; e--; }
                }
            }
            else if (canL) {
                pick = 'L'; chosenVal = left; s++;
            }
            else if (canR) {
                pick = 'R'; chosenVal = right; e--;
            }
            else {
                if (left < right) { pick = 'L'; chosenVal = left; s++; }
                else { pick = 'R'; chosenVal = right; e--; }
            }
            if (last != -1) {
                if (chosenVal > last) { inc++; dec = 0; }
                else if (chosenVal < last) { dec++; inc = 0; }
                else { inc = dec = 0; }
            }

            last = chosenVal;
            ans.push_back(pick);
        }

        cout << ans <<endl;
    }

    return 0;
}


