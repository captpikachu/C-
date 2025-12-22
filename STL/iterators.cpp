#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{



vector<int> v1={3,5,3,7,2};
vector<int> :: iterator it;
// vector<int> &v2=v1;
v1.push_back(2);
v1.push_back(3);
// cout<<(*it)<<endl;
// cout<<*(it+1)<<endl;
for(it=v1.begin()+1;it!=v1.end();it++){
    cout<<(*it)<<endl;
}
cout<<endl<<v1.size();

// pairs ka 


}