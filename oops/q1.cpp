#include<iostream>
#include<vector>
using namespace std;

        // return ans;

int main()
{

        int n;
    cin>>n;
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {   int a;
    int b;
        cin>>a;
        cin>>b;
        v.push_back(a);

    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]!=v[j])
            ans++;

        }}
        cout<<ans;
        return 0;}
        //  return ans;}
// return 0;
