#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    int rem = n%4;
    int ans = n/4;
    if(rem>=2)
    ans+=1;
    cout<<ans<<endl;
    t--;
}

return 0;
}