#include<bits/stdc++.h>
using namespace std;
int fun(string s){
    vector<int> arr(256,-1);
    int l=0;
    // int h=0;
    int maxi = 0;
    for(int i=0;i<s.size();i++){
        // h++;
        if(arr[s[i]]>=l)
        {l = arr[s[i]]+1;}
        arr[s[i]]=i;
        maxi = max(maxi,i-l+1);
    }
    return maxi;
}
int main()
{
string s = "abcabcbb";
int ans = fun(s);
cout<<ans;
return 0;
}