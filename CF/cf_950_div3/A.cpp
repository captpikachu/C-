#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n,m;
    cin>>n>>m;
    map<char,int> freq;
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
{   freq[s[i]]++;
    i++;
}
string temp="ABCDEFG";
int count=0;
for(int i=0;i<7;i++){
    if(freq[temp[i]]<m)
    count = count + m-freq[temp[i]];
}
cout<<count<<endl;
    t--;
}
return 0;
}