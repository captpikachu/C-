#include<bits/stdc++.h>
 #define tr(container, it)\
 for (typeof (container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;
int main()
{
//     vector<int> v;
//     v.emplace_back(1);
//     v.emplace_back(33);
//     v.emplace_back(5);
//     v.emplace_back(2);
//     int r = 0;
//   tr(v, it) {
//     r = ( * it);
//     cout<<r<<endl;
//   }
set < pair < string, pair < int, vector < int > > > > SS;

vector <int> v1= {1,2,3};
string s1="hello";
string s2="hell";
vector <int> v2= {1,2};
pair<int,vector<int>>t1={1,v1};
pair<int,vector<int>>t2={4,v2};
pair<string,pair<int,vector<int>>> p2={s2,t2};
pair<string,pair<int,vector<int>>> p1={s1,t1};
// p2={v1,t1};
SS.insert(p1);
SS.insert(p2);
int total = 0;
tr(SS, it) {
  total += it -> second.first;
}
cout<<total;


return 0;
}