#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    vector<int> og(n);
    for(int i=0;i<n;i++){
        cin>>og[i];
    }
    vector<int> mf(n);
    for(int i=0;i<n;i++){
        cin>>mf[i];
    }
    int differ=0;
    for(int i=0;i<n;i++){
        if(og[i]!=mf[i])
        differ++;
    }
    int m;
    cin>>m;
    vector<int> op(m);
    for(int i=0;i<m;i++){
        cin>>op[i];
    }

    m--;
    while(m>=0){
    
    m--;}
    t--;
}

return 0;
}