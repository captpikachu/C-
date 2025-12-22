#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int m;
    int k;
    cin>>n;
    cin>>m;
    cin>>k;
    vector<int> desired(n);
    vector<int> size(m);
        vector<bool> allocated_boxes(m, false);
        for(int i=0;i<n;i++){
        cin>>desired[i];
    }
for(int i=0;i<m;i++){
    cin>>size[i];
}
int allocated=0;
sort(desired.begin(),desired.end());
sort(size.begin(),size.end());
int last=0;
for(int i=0;i<n;i++){
    int left = 0, right = m - 1;
    while(left <= right) {
            int mid = left + (right - left) / 2;
            if(abs(size[mid] - desired[i]) <= k && !allocated_boxes[mid]) {
                allocated++;
                allocated_boxes[mid] = true;
                break;
            }
            else if(size[mid] < desired[i])
                left = mid + 1;
            else
                right = mid - 1;
        }
    // for(int j=last;j<m;j++){
    //     if(size[j]<=desired[i]+k && size[j]>=desired[i]-k){
    //         allocated++;
    //         size[j]=-2147483647;
    //         last =j;
    //         break;
    //     }
    // }
    }
cout<<allocated;
return 0;
}
