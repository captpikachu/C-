#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int mini = 1000000001;
    bool ans = true;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>=2*mini)
        ans=false;
        mini = min(mini,a);
    }
    if(ans)
    cout<<"yes"<<endl;
    else cout<<"no"<<endl;

}

return 0;
}