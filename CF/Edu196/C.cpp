#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    long long ans = 0;
    long long count1= 0;
    long long count2=0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
        for(int i = 0;i<n;i++){
        cin>>b[i];
    }    for(int i = 0;i<n;i++){
        cin>>c[i];
    }
    for(int i = 0;i<n;i++){
        bool inc = true;
        for(int j = 0;j<n;j++){
           if (a[j]>=b[(j+i)%n])
            {inc = false;break;}
        }
        if(inc) count1++;

    }
    for(int i = 0;i<n;i++){
        bool inc = true;
        for(int j = 0;j<n;j++){
           if (b[j]>=c[(j+i)%n])
            {inc = false;
            break;}
        }
        if(inc) count2++;

    }
    cout<<n*count1*count2<<endl;
}
return 0;
}   