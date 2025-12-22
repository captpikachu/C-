#include<bits/stdc++.h>
using namespace std;
int main()
{


int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
for(int k=0;k<n;k++){
    int count=0;
for(int i=2;(long long) i*i<=v[k];i++){
    if((long long)i*i==v[k])
    count+=1;
else if(v[k]%i==0)
count=count+2;
}
if(v[k]>1)
count=count+2;
else
count = count+1;
cout<<count<<endl;
}
return 0;
}

