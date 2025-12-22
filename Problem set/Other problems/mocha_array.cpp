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
for(int i=0;i<n;i++){
    cin>>nums[i];
}
sort(nums.begin(),nums.end());
int first = nums[0];
int second = nums[1];
for(int i=1;i<nums.size();i++){
    if(nums[i]%first!=0)
    {second = nums[i];
    break;}
}
bool bk =0;
for(int i=0;i<n;i++){
    if(nums[i]%first !=0 && nums[i]%second!=0)
    {cout<<"No"<<endl;
    bk=1;
    break;}
}
if(!bk)
cout<<"Yes"<<endl;
    t--;
}
return 0;
}