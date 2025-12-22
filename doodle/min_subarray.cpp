#include<bits/stdc++.h>
using namespace std;
int main()
{
deque <int> d1;
int n;
cout<<"Enter size of array :"<<endl;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int m;
cout<<"Enter size of subarray: "<<endl;
cin>>m;

for(int i=0;i<m;i++){
int curr=arr[i];
    while(!d1.empty() && d1.back()>curr)
      d1.pop_back();
    d1.push_back(curr);
  }
  cout<<"Min for "<<1<<" subarray is: "<<d1.front()<<endl;
  for(int j=m;j<n;j++){
    if(d1.front()==arr[j-m])
    d1.pop_front();
    int curr=arr[j];
    while(!d1.empty() && d1.back()>curr)
      d1.pop_back();
    d1.push_back(curr);
    cout<<"Min for "<<j-m+2<<" subarray is: "<<d1.front()<<endl;
  }
return 0;
}