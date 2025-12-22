#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,s;
    cin>>n>>s;
    vector<int> nums(n);
    int minsum=0;
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){cin>>nums[i];minsum+=nums[i];
    if(nums[i]==0)
    count0++;
    else if(nums[i]==1)count1++;
    else count2++;
    }
    if(s>=minsum+2 || s==minsum)
    cout<<-1<<endl;
    else{
        while(count0--)
        cout<<0<<" ";
        // cout << "\b";
        while(count2--)
        cout<<2<<" ";
        // cout << "\b";
        while(count1--)
        cout<<1<<" ";
        cout<<endl;
    }
    

}

return 0;
}