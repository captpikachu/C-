#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int flag=0;
    map<int,int> temp;
      int val;
    for(int i=0;i<n;i++){
        val = target-nums[i];
        if(temp.find(nums[i])==temp.end()){
            temp[val]=i;
        }
else{
    cout<<((*temp.find(nums[i])).second+1)<<" "<<i+1<<endl;
    flag=1;
break;}
}
if(!flag)
cout<<"IMPOSSIBLE";
return 0;


}