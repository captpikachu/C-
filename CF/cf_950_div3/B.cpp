#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n,f,k;
    cin>>n>>f>>k;
    vector<int> dice(n);
    for(int i=0;i<n;i++){
        cin>>dice[i];
    }
    int fav = dice[f-1];
    sort(dice.begin(),dice.end(),greater<int>());
    int count_fav=0;
    int first_index=0;
    int last_index=0;
    bool found=0;
    for(int i=0;i<n;i++){
        if(dice[i]==fav){
        count_fav++;
        if(!found)
        first_index=i;
        found=1;}
    }
    last_index=first_index+count_fav-1;
    // cout<<"last index is "<<last_index<<endl;
    if(k-1>=last_index)
    cout<<"YES"<<endl;
    else if(k-1>=first_index && k-1<last_index)
    cout<<"MAYBE"<<endl;
    else
    cout<<"NO"<<endl;
    t--;
}

return 0;
}