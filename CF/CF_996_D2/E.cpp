#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n ;
    cin>>n;
    vector<pair<int,int>> haystack;
    for(int i =0;i<n;i++){
        int a,b;
        cin>>a>>b;
        haystack.push_back(make_pair(b,a)); // making in order of limit and hay
    }
    sort(haystack.begin(),haystack.end());
    long int moves = 0;
    for(int i =0;i<n;i++){
        moves = moves + haystack[i].second;
    }

    t--;
}

return 0;
}