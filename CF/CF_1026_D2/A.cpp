#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i =0;int j = n-1;
    int op1=0;int op2=0;
        int sign1 = v[i]%2;
        int sign2 = v[j]%2;

    if((v[i]+v[j])%2==0) cout<<0<<endl;
    else{
        // while(v[i]==v[i+1]){i++;op++;}
        while(v[i]%2==sign1)
        {i++;op1++;}
        // i=0;
        while(v[j]%2==sign2)
        {j--;op2++;}

cout<<min(op1,op2)<<endl;
}
    }    
    

return 0;
}