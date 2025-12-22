#include<bits/stdc++.h>

using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long moves =0;
    for(long long i=0;i<n;i++){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b)
        moves = moves + a+ b-d;
        else
        moves = moves + (a-c>0?a-c:0);

    }
    cout<<moves<<endl;
}

return 0;
}