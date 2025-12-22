#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> vec){
   int n = vec.size();
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}
int main()
{
// pair<int,char> p1 = {3,'a'};
// cout<<p1.first<<" "<<p1.second;

vector<int> v1;
vector<int> &v2=v1;
v1.push_back(2);
v1.push_back(3);
// printvec(v1);
// printvec(v2);
cout<<*(v1.begin());
return 0;
}