#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
map<int,int> v;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v[a]=i;
}
stack <int> s;
s.push(0);
int round=0;
auto prev = 0;
while(s.top()!=n){
  auto curr=v.find(s.top()+1)->second+1;
  if(curr>=prev)
  {s.push(s.top()+1);
  prev = curr;}
  else{
    round++;
    s.push(s.top()+1);
    prev=curr;
  }
}
round++;
cout<<round;
return 0;
}