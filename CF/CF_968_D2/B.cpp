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
    while(n>1){
        nums.erase(nums.begin());
        n--;
        if(n==1)
        break;
        nums.erase(nums.end()-1);
        n--;
    }
cout<<nums[0]<<endl;
    t--;
}

return 0;
}