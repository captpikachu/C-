#include<bits/stdc++.h>
using namespace std;
long pow_4(long a){
    long ans = 0;

}
int main()
{
int t;
cin>>t;
while(t){
    long long int n;
    cin>>n;
    long int ans=1;
    while(n>3){
        n = n>>2;
        ans = ans<<1;
    }
    cout<<ans<<endl;
    t--;
}

return 0;
}