#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int t;
    cin>>t;
    while(t){
     int n;
    cin >> n;
      vector<int> ans(n);  
        vector<string> mat(n);
        for (int i = 0; i < n; i++) {
            cin >> mat[i];
        }
        for(int i=0;i<n;i++){
            ans[i]=n-i;
        }
        for (int i = n - 1; i >= 0; i--) {  
            auto it_ele = find(ans.begin(), ans.end(), i + 1);
            
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == '1') {  
                    auto it_j = find(ans.begin(), ans.end(), j + 1);
                    if (it_ele > it_j) { 
                        swap(*it_ele, *it_j);
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        t--;
    }
   



    return 0;
}
