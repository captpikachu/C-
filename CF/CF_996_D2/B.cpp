#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    vector<int> a(n);
    int diff=0;
    int less_count=0;
    int min_abs=INT_MAX;
    vector<int> b(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
        for(int i =0;i<n;i++){
        cin>>b[i];
        if(a[i]-b[i]<0)
        {less_count++;
        diff = b[i]-a[i];}
        else min_abs = min(min_abs,a[i]-b[i]);}
    if(less_count==0)
    {cout<<"YES"<<endl;}
    else if(less_count==1){
        
        if(diff<=min_abs)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;
    
    
    t--;
}

return 0;
}