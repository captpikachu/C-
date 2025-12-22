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
        bool is2=false;
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==2)
            is2=true;
            sum+=nums[i];
        }
        sort(nums.begin(),nums.end());
        int first =0;
        int count0=0;
        for(int i=0;i<n;i++)
        {if(nums[i]==0)
        count0++;}
        cout<<sum+count0<<endl;
        // else cout<<sum<<endl;
    }


return 0;
}