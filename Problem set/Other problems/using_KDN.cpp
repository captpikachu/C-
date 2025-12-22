#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
cin>>nums[i];
}
int sum =0;
int start=0;
int end =0;
int max = INT_MIN;
for(int i=0;i<n;i++){
    if(sum==0)
    start =i;
sum = sum +nums[i];
if(sum>max)
{max = sum;
end =i;
}
if(sum<0)
sum=0;
}
cout<<max;
return 0;
}