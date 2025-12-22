#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;

vector<pair<int,int>> v;
set<int> lt;
int maxc=0;
int no_of_customer=0;
for(int i=0;i<n;i++){
    int in,out;
    cin>>in>>out;
    v.emplace_back(make_pair(in,out));}

sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    int in,out;
    in = v[i].first;
    out = v[i].second;
    if(!lt.empty() && lt.lower_bound(in)!=lt.begin()){
         auto it = lt.lower_bound(in);
        it--;
        if(lt.lower_bound(in)==lt.end())
        {no_of_customer=0;
            lt.clear();}
        
        else{
            lt.erase(*it);
            no_of_customer--;
        }
    }
    no_of_customer++;
    if(no_of_customer>maxc)
    maxc = no_of_customer;

    lt.insert(out);
}
cout<<maxc;
return 0;
}



// room allc 
// 