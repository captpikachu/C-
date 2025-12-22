#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> &p1, pair<int,int> &p2){
return p1.second<p2.second;
}
int main()
{
int n;
cin>>n;
vector<pair<int,int>> v1(n);
for(int i=0;i<n;i++){
cin>>v1[i].first>>v1[i].second;
}
sort(v1.begin(),v1.end(),comp);
int curr=v1[0].second;
int count=1;
for(int i=1;i<n;i++){
    if(v1[i].first>=curr)
    {count++;
    curr = v1[i].second;
    }
}
cout<<count;
return 0;
}