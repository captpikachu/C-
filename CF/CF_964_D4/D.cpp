#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    string s;
    cin>>s;
    string y;
    cin>>y;
    int s_len = s.length();
    // cout<<s_len;
    int t_len = y.length();
    int i=0;int j=0;
    int match=0;
    char lst = y[t_len-1];
    while(i<s_len){
        if(j>=t_len)
        j=t_len-1;
    if(s[i]==y[j])
    {i++;j++;
    match++;}
    else if(s[i]=='?')
    {s[i]=y[j];
    i++;j++;
    match++;}
    else i++;
    }
    if(match>=t_len)
    {cout<<"YES"<<endl<<s<<endl;}
    else
    cout<<"NO"<<endl;
    t--;
}

return 0;
}