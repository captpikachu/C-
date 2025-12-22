#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
int n;
cin>>n;
vector<int> occ(n+1,0);
bool followed=true;
for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    occ[a]=1;
    if(i>1){
        if(a==1 && occ[2]==0)
        followed=false;
        else if(a==n && occ[n-1]==0)
        followed=false;
        else if(occ[a-1]==0 && occ[a+1]==0)
        followed=false;

    }
}
if(followed)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    t--;
}

return 0;
}