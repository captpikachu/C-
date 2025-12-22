#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    int x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int mini = min(abs(x-v[0]),abs(v[n-1]-x));
    cout<<mini+(v[n-1]-v[0])<<endl;

}

return 0;
}