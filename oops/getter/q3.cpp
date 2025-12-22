#include<iostream>
#include<vector>
using namespace std;
int main()
{
bool result =0;
int n;
int m;
cin>>n;
cin>>m;
if(n>m){
cout<<"YES";
result=1;}
if(m>n){
cout<<"NO";
result=1;
}
if(result==0){
    vector<char*>alex;
    vector<char*> sam;
    
for(int i=0;i<n;i++){
    char* temp;
    cin>>temp;
    alex.push_back(temp);
}
for(int j=0;j<m;j++){
     char* temp;
    cin>>temp;
    sam.push_back(temp);
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<m;j++){
        if(alex[i]==sam[j])
        cout<<"YES";
    result=1;
    }
}
if(result!=1)
cout<<"NO";
}
return 0;
}