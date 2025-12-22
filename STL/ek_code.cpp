#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

vector<int> v={345,546,34,234,342};
v.push_back(3);
v.push_back(4);
for(int i: v){ // range based loop
    cout<<i<<" ";
}
cout<<endl;
int j=1;
for(int i: v){
    cout<<"The "<<j<<" element is: "<<i<<endl;
    j++;
}

auto a=1; // dynamically takes datatype
cout<<a;
return 0;
}
