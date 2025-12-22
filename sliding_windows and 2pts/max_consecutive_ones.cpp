#include<bits/stdc++.h>
using namespace std;
int longestOnes(vector<int>&nums,int k){
int maxi=0;
vector<int> arr;
arr.push_back(-1);
for(int i=0;i<nums.size();i++){
    if(nums[i]==0)
       arr.push_back(i);
    }
    arr.push_back(nums.size());
    // int st=1;
    // one more condition if arr.size is less than count then max is last pos of 0 in arr
    if(arr.size()<=k+2)
    return nums.size();
int arr2[4]={-1,-1,-1,-1};
for(int i = 0;i<(arr.size()-k-1);i++){
arr2[0]=arr[i];
arr2[1]=arr[i+1];
arr2[2]=arr[i+k];
arr2[3]=arr[i+k+1];
maxi = max((arr2[3]-arr2[0]-1),maxi);
// cout<<maxi<<endl;
// cout<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<" "<<arr2[3]<<endl;
}

return maxi;
}


int main()
{
vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1};
cout<<longestOnes(nums,2);
return 0;
}