#include<bits/stdc++.h>
using namespace std;
pair<int,int> find_max(vector<vector<int>> &nums){
int maxi,maxj=0;
int with_maxi,with_maxj=0;
int n = nums.size();
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    if(nums[i][j]==1)
   { if(i>maxi)
    maxi=i;
    with_maxj=j;
    if(j>maxj)
    maxj=j;
    with_maxi=i;
    }
}
}
if(maxi>maxj)
return {maxi,with_maxj};
return {maxj,with_maxi};
}
int main()
{
int n;
cin>>n;
vector<string> cows(n);
for(int i =0;i<n;i++){
    cin>>cows[i];
}
vector<vector<int>> nums(n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        nums[i][j]=cows[i][j]-'0';
    }
}

// cout<< max(2,2);
return 0;
}