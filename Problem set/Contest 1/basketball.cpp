#include<bits/stdc++.h>
using namespace std;
bool isPossible(int mid,int d,vector<int> & players,int n){
int i=0;
while(i<mid){

if((n/mid) * players[n-1-i]<=d){
return false;
}
i++;
}
return true;
}
int main()
{
int n,d;
cin>>n>>d;
vector<int> players;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    players.emplace_back(a);
}
sort(players.begin(),players.end());
int s =0;
int e=n;;
int mid = (e-s)/2 + s;
int ans =0;
while(s<=e){
    if(isPossible(mid,d,players,n))
    
    {   ans = mid;
        s=mid+1;
    mid = (e-s)/2 + s;}
    else{
    e = mid-1;
    mid = (e-s)/2 + s;}
}
cout<<endl;

cout<<ans;
return 0;
}