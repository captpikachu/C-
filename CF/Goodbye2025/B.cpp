#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string w;
cin>>w;
int n = w.size();
int count =0;
if(w[0]!='s')
count++;
if(w[w.size()-1]!='s')
{w[w.size()-1]='s';
count++;}
for(int i =2;i<n-1;i++){
if(w[i]==w[i-1] && w[i-1]=='u'){
w[i]='s';
count++;}
}

cout<<count<<endl;

}

return 0;
}