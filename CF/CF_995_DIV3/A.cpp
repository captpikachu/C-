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
vector<int> b(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
int ans=a[n-1];
for(int i=0;i<n-1;i++){
    if(b[i+1]<a[i])
    ans = ans + a[i]-b[i+1];
}
cout<<ans<<endl;
t--;
}

return 0;
}