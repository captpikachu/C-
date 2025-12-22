#include<iostream>
#include<vector>
using namespace std;
int main()
{
char *t;
char*u;
cin>>t;
cin>>u;


vector <char*> v;
v.push_back(t);
v.push_back(u);
cout<<v[1][0];
return 0;
}