#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n = s.size();
    int i =0;
    int j = n-1;
    // bool print = false;
    while(s[i]=='(')
    i++;
    while(s[j]==')')
    j--;
    // i--;j++;
    if(i!=n/2 && j!=n/2+1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
 
return 0;
}