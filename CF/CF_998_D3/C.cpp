#include<bits/stdc++.h>
using namespace std;
int findLastOccurrence(const vector<int>& nums, int key) {
    int left = 0, right = nums.size() - 1;
    int result = -1;  // Default result if key is not found
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == key) {
            // Found the key, update result and search further to the right
            result = mid;
            left = mid + 1;  // Move to the right half to find the last occurrence
        } 
        else if (nums[mid] < key) {
            left = mid + 1;  // Search in the right half
        } 
        else {
            right = mid - 1;  // Search in the left half
        }
    }
    
    return result;  // Return the last occurrence index, or -1 if not found
}

int main()
{
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int> nums(n);
// map<int,int> sum;
for(int i =0;i<n;i++){
    cin>>nums[i];
}
sort(nums.begin(),nums.end());
int score = 0;
for(int i=0;i<nums.size();i++){
    int l = findLastOccurrence(nums,k-nums[i]);
    if(l!=-1 && l>i)
    {nums.erase(nums.begin()+l);
    score++;}
//     for(int j=0;j<nums.size();j++){
//         cout<<nums[j]<<" ";
//     }
//     cout<<endl;
}
cout<<score<<endl;
}
return 0;
}