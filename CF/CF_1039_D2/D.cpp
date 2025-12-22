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
    for(int i=0;i<n;i++)cin>>nums[i];
    // long long ans = 0;
    // n . 2^ (n-1)
    vector<long long > ans(n+1);
    int dec = 0;
    ans[0]=0;
    ans[1]=1;
    long long val=0;
    long long sub = 0;
    val=1;
    for(int i=2;i<=n;i++){       

        if(nums[i-1]<nums[i-2])
        {ans[i] = ans[i-1] + i*(i+1)/2 ;
        }
        else {
            ans[i]=ans[i-2] + i*(i-1)/2;
        }
    }CF_1
    // cout<<"total dec seq "<<val<<endl;
    //  cout<<val-sub<<endl;
    cout<<ans[n]<<endl;

}
return 0;
}

