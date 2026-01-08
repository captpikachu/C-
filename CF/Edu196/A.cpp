#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1 = "2025";
    string s2 = "2026";
    int i = 0;
    int ans = 0;
    int count = 0;
    for(int j = 0;j<n-3;j++){
        if(s[j]=='2' && s[j+1]=='0' && s[j+2]=='2' && s[j+3]=='6')
        return 0;
    }
        for(int j = 0;j<n-3;j++){
        if(s[j]=='2' && s[j+1]=='0' && s[j+2]=='2' && s[j+3]=='5')
        return 1;
    }
    return 0;
    }
int main()
{
int t;
cin>>t;
while(t--){
cout<<solve()<<endl;
}

return 0;
}