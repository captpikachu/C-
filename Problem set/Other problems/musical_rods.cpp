#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2){
    return p2.second*p1.first<p1.second*p2.first;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int z= 0;z<t;z++){
	    int n;
	    cin>>n;
        vector<pair<int,int>> rod;
        vector<int> length(n);
        vector<int> beauty(n);
	    for(int i=0;i<n;i++){
           cin>>length[i];
	    }
        for(int i=0;i<n;i++){
           cin>>beauty[i];
	    }
            for(int i=0;i<n;i++){
       rod.emplace_back(make_pair(beauty[i],length[i]));
	    }
        sort(rod.begin(),rod.end(),comp);
        long long sum = 0;
        auto it = rod.begin();
        long long len=0;
        for(;it!=rod.end();it++){
            cout<<(*it).first<<" "<<(*it).second<<endl;
            sum = sum + (long long)(len)*((*it).first);
            cout<<"current sum: "<<sum<<endl;
            len = len + (long long)(*it).second;
        }
        cout<<sum<<endl;
	}
}
