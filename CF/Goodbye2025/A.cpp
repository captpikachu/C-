#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Y')
        count++;
        if(count>=2)
        break;
    }
    if(count>=2)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}

return 0;
}