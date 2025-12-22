#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,k;
cin>>n>>m>>k;
vector <int> desired;
vector<int> size;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    desired.emplace_back(a);
}
for(int i=0;i<m;i++){
    int b;
    cin>>b;
    size.emplace_back(b);
}
sort(desired.begin(),desired.end());
sort(size.begin(),size.end());
int i=0;
int j =0;
int allocated=0;
while(j!=m && i!=n){
    if(desired[i]<(size[j]-k))
    i++;
    else if((size[j]+k)<desired[i])
    j++;
    else{
        allocated++;
        i++;
        j++;
    }
}
cout<<allocated;
return 0;
}