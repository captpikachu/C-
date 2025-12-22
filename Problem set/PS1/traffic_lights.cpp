#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,n;
cin>>x>>n;
set<int> pos;
multiset<int> len;
len.insert(x);
pos.insert(0);
pos.insert(x);
int max=0;
for(int i=0;i<n;i++){
int a;
cin>>a;
pos.insert(a);
auto it = pos.find(a);
auto next = ++it;
it--;
auto prev = --it;
len.erase(len.find(*next-*prev));
int d1,d2;
d1 = *next-a;
d2 = a-*prev;
len.insert(d1);
len.insert(d2);
cout<<*len.rbegin()<<endl;
}
return 0;
}