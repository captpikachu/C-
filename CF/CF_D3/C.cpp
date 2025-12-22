#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> dup;
    dup.push_back(arr[0]);
        for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
        continue;
        else
        dup.push_back(arr[i]);
    }
    int count = 0;
    int last = dup[0];
    for(int i =1;i<dup.size();i++){
        if(dup[i]>last+1)
        {last = dup[i];
        count++;}
    }
    cout<<(count+1)<<endl;
}
return 0;
}