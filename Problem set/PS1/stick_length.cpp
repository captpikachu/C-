#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    sort(l.begin(),l.end());
   if(n==2)
    cout<<l[1]-l[0];
    else if(n%2==0){
        int val1=n/2;
        long long sum=0;
        int val2=n/2-2;
        int val = (l[val1]+l[val2])/2;
        for(int i=0;i<n;i++){
            sum = sum + abs(l[i]-val);
        }
        
cout<<sum;
    }
    else{
        int val = (n+1)/2-1;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum = sum + abs(l[i]-l[val]);
        }
        cout<<sum;
    }
return 0;
}