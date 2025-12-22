#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> gcds(n-1);
    vector<int> tr;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int mon_count=0;
    for(int i=1;i<n;i++){
        gcds[i-1]=__gcd(nums[i],nums[i-1]);
    }
    for(int i=1;i<n-1;i++){
        if(gcds[i]<gcds[i-1])
        {mon_count++;
        tr.push_back(i);
        tr.push_back(i+1);
        if(tr.size()>=6)
        break;
    
            // cout<<"erasing "<<*(nums.begin()+i+1)<<endl;
        // nums.erase(nums.begin()+i+1);
        break;
        }
    }
    bool possible = false;
for(int i=0;i<6;i++){
    int removed_element = nums[tr[i]];
    nums.erase(nums.begin()+tr[i]);
    
            // nums.erase(nums.begin() + i);

            // Check if the resulting sequence is non-decreasing
            bool non_decreasing = true;
            for (int j = 1; j < nums.size()-2; j++) {
                if (__gcd(nums[j], nums[j - 1]) > __gcd(nums[j + 1], nums[j])) {
                    non_decreasing = false;
                    break;
                }
            }

            // Restore the removed element
            nums.insert(nums.begin() + i, removed_element);
             if (non_decreasing) {
                possible = true;
                break;
            }
}
    if(possible)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    t--;}

return 0;
}