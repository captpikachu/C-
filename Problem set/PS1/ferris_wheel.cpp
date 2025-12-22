#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n;
cin>>x;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
int gc=0;
vector<int> t={-1,-1};
sort(arr.begin(),arr.end());
int i=0;
int j = n-1;
while(i<=j)
{
    if(i==j && arr[i]<=x)
    {gc++;
    i++;}
else if(arr[i]+arr[j]<=x)
{gc++;
i++;
j--;}
else {
    gc++;
j--;}


}

cout<<endl<<gc;
return 0;
}
