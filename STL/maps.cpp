#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,string> m; // maps like dictinary in python
m[1]="abc";
m[2]="abcd";
m[4]="abcde";
m[5]; // O(log(n)) 
m.insert({3,"bcd"});
map<int,string>:: iterator it;
cout<<"size: "<<m.size()<<endl;
for(it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<" "<<it->second<<" "<<endl;
}



return 0;
}