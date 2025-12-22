#include<bits/stdc++.h>
using namespace std;
bool check(string &s,vector<int>&arr){
    if(s.length()!=arr.size())
    return false;
    map<int,char> m1;
    map<char,int> m2;
    for(int i=0;i<arr.size();i++){
        if(m1.find(arr[i])!=m1.end()){
            if(s[i]!=m1[arr[i]])
            return false;
        }
        
        m1[arr[i]]=s[i];
    }
    for(int i=0;i<arr.size();i++){
        if(m2.find(s[i])!=m2.end()){
            if(arr[i]!=m2[s[i]])
            return false;
        }
        m2[s[i]]=arr[i];
    }
    return true;
}
int main()
{

int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
int m;
cin>>m;
for(int i=1;i<=m;i++){
    string s;
    cin>>s;
    if(check(s,arr))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
    t--;
}

return 0;
}