#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> d(n);
    for(int i =0;i<n;i++){
        cin>>d[i];
    }
    vector<int> l(n);
    vector<int> r(n);
    for(int i =0;i<n;i++){
        cin>>l[i];cin>>r[i];
    }
    bool print = false;
    for(int i =0;i<n;i++){
        if(i>=l[i])
        d[i]=l[i];
        else{
            cout<<-1<<endl;
            print = true;

            break;
        }
    }
    if(!print){
        for(int i=0;i<n;i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
}

return 0;
}