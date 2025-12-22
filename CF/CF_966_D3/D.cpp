#include<bits/stdc++.h>
using namespace std;
int findLastIndex(string& str, char x)
{
    int index = -1;
    for (int i = 0; i < str.length(); i++)
        if (str[i] == x)
            index = i;
    return index;
}
int main()
{
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    vector<int> arr(n);
    string s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>s;
    string p = s;
    reverse(p.begin(),p.end());
    long long int score = 0;
    size_t l = s.find('L');
    size_t r = findLastIndex(s,'R');
    while(l!=string::npos && r !=-1){
        while(r<l && r!=-1)
        {s[r]='.';
        r = findLastIndex(s,'R');}
    if(l!=string::npos && r !=-1){
    
    for(int i=l;i<=r;i++){
        score = score + arr[i];
    }
    s[l]='.';
    s[r]='.';}
    l = s.find('L');
    r = findLastIndex(s,'R');}
    cout<<score<<endl;
    t--;
}
 
return 0;
}