#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> prefix(n);
vector<int> suffix(n);
bool condition1=true;
bool condition2=true;
// bool condition3=false;
for(int i=0;i<n;i++){
    cin>>prefix[i];
}
for(int i=0;i<n;i++){
    cin>>suffix[i];
}

for(int i =0;i<n-1;i++)
{
    if(prefix[i]%prefix[i+1]!=0)
    condition1=false;
    if(suffix[i+1]%suffix[i]!=0)
    condition2=false;

}
if(condition1&&condition2)
cout<<"yes"<<endl;
else cout<<"no"<<endl;
}

return 0;
}