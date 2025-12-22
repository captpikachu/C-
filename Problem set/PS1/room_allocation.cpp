#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,pair<int,int>> p1,pair<int,pair<int,int>> p2)
{
return p1.second.first<p2.second.first;
}
// bool comp2(pair<int,int>p1,pair<int,int>p2){
//     return p1.second<p2.second;
// }
int main()
{   int n;
cin>>n;
    vector<pair<int,pair<int,int>>> v1;
    set <int> s1;
    set<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v1.emplace_back(make_pair(i,make_pair(a,b)));
    }
    sort(v1.begin(),v1.end(),comp);
    int room_no=1;
for(int i=0;i<n;i++){
    int in = v1[i].second.first;
    int out = v1[i].second.second;
    s1.emplace(out);
// if(s1.empty()){
// room_no++;
// // ans.emplace(i,room_no);
// }
if(in>(*s1.begin())){
    while(in>(*s1.begin()))
    {s1.erase(s1.begin());
    room_no--;
    }
    // cout<<room_no<<" "<<endl;
    ans.emplace(v1[i].first,room_no);
}
// s1.emplace(out);
else{
    room_no++;
    ans.emplace(v1[i].first,room_no);
}
// cout<<room_no<<" ";
for(auto it=s1.begin();it!=s1.end();it++){
    
    cout<<"elements of set are: "<<(*it)<<endl;
}
cout<<endl;
}
for(auto it=ans.begin();it!=ans.end();it++){
    cout<<((*it).second)<<" ";
}

return 0;
}