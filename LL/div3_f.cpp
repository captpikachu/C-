#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
if(p1.first>p2.first)
return false;
if(p1.first<p2.first)
return true;
else{
    if(p1.second<p2.second)
    return false;
    else
    return true;}

}
int main()
{
int t;
cin>>t;
while(t){
    int n,k;
    cin>>n>>k;
    vector<int> v1;
    vector<pair<int,int>> vop;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.emplace_back(a);
    }
     for(int i=0;i<n;i++){
        int b;
        cin>>b;
        int a = v1[i];
        pair<int,int> p1 = make_pair(a,b);
        vop.emplace_back(p1);
    }
    sort(vop.begin(),vop.end(),comp);
    long long score=0;
    int last_max =0;
    int last_pos=n-1;
    for(int i=0;i<k;i++){
        int curr = vop[n-i-1].first;

        if(last_max<curr){
        score = score + curr;
        last_pos=n-i-1;
        last_max = max(vop[n-i-1].first - vop[n-i-1].second,0);
        vop[last_pos].first=last_max;
        
        }

        else{
        score = score + last_max;

        last_max = max(vop[last_pos].first - vop[last_pos].second,0);
        vop[last_pos].first=last_max;

        }



    }
cout<<score<<endl;
    t--;
}

return 0;
}