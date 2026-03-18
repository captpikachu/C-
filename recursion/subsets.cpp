#include<bits/stdc++.h>
using namespace std;
void printArr(vector<int>arr){
int n = arr.size();
// cout<<n<<" is the size"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}}
void GS(vector<int> arr,vector<int> nums,int n,int len,int i){
if(i>=len)
{   printArr(arr);
    cout<<endl;
    return;}
GS(arr,nums,n,len,i+1);
arr.push_back(nums[i]);
GS(arr,nums,n+1,len,i+1);

}
int main()
{
vector<int> nums={1,2,3};
vector<int>arr;
GS(arr,nums,0,nums.size(),0);
return 0;
}