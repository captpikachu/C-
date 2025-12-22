#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
}
bool print = false;
for(int i =1;i<n;i++){
if(nums[i]>=nums[i-1])
nums[i]=nums[i]-nums[i-1];
else {print = true;
break;}

}
if(print)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
return 0;
}