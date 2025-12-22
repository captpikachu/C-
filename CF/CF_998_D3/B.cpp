#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
bool print = false;
vector<int> perm(n);
int i =0;
while(i<n){
    vector<int> temp(m);
    for(int j =0;j<m;j++){
        cin>>temp[j];
    }
    sort(temp.begin(),temp.end());
    for(int j=1;j<m;j++){
        if(temp[j]-temp[j-1]!=n && !print)
        {
        print = true;
        break;}
}
if(!print)
perm[temp[0]]=(i+1);
i++;
}
if(print)
cout<<-1<<endl;
if(!print){
{for(int i=0;i<n;i++)
cout<<perm[i]<<" ";}
cout<<endl;
}
}
return 0;
}