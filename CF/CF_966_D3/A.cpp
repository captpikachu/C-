#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int a;
    cin>>a;
    string s="";
    while(a>0){
        s = s + char((a%10)+'0');
        a=a/10;
    }
    reverse(s.begin(),s.end());
    // cout<<"string is "<<s<<endl;
    // bool isPossible=false;
    bool print = false;
    if(s.length()<=2)
    {cout<<"NO"<<endl;
    print = true;}

    if(s[0]=='1' && s[1]=='0' && !print)
    {  
        if(s.length()>3 && s[2]>='0'+1)
        {cout<<"YES"<<endl;
        print = true;}
        else if(s.length()==3 && s[2]>=2+'0')
        {cout<<"YES"<<endl;
        print = true;}
    }
if(!print)
cout<<"NO"<<endl;

    t--;
}

return 0;
}