#include<bits/stdc++.h>
using namespace std;
// method 1
// int n;
// vector<int> ans;
// void generate_subsets(int k,vector<int> &v){
// if(k==v.size()){
//     if(ans.size()==0)
//     cout<<"fi"<<" ";
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// cout<<endl;
// }
// else{
//     generate_subsets(k+1,v);
//     ans.push_back(v[k]);
//     generate_subsets(k+1,v);
//     ans.pop_back();
// }

// }
int main()
{
    // method 2
vector<int> v = {3,5,7,9};
int n = v.size();
int m = pow(2,n);
for(int num =0;num<m;num++){
    vector<int> ans;
    int temp = num;
for(int i=0;i<n;i++){
if(1&temp)
ans.push_back(v[i]);
temp = temp>>1;
if(temp==0)
break;
}
if(ans.size()==0)
cout<<"fi"<<" ";
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

}

// generate_subsets(0,v);
// return 0;
}